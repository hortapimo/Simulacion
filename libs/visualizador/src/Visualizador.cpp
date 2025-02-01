#include "Visualizador.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <memory>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

typedef  std::vector<std::vector<float>> Matrix;

uint64_t getNrows(std::string path){
    
    std::ifstream file(path);
    std::string linea;
    uint64_t contador = 0;

    if (file.is_open()) {
        std::getline(file, linea);//paso la primera linea q es la q dice la cantidad de particulas
        while (std::getline(file, linea)) {
            ++contador; // Incrementa el contador por cada línea leída
        }
        file.close();
    } else {
        std::cout << "No se pudo abrir el archivo (getNrows)." << std::endl;
    }

    return contador;
}

uint32_t getNColums(std::string path){
    std::ifstream file(path);
    std::string linea;
    uint32_t nParticulas;

    if(file.is_open()){
        getline(file,linea);
        nParticulas = std::stoi(linea);
        file.close();
    }else {
        std::cout << "No se pudo abrir el archivo de resultados" << std::endl;
        exit(EXIT_FAILURE);
        return -1;
    }
    
    return nParticulas;
}

void cargarMatriz(Matrix& matrix, std::string path){
    
    std::ifstream archivo(path); // Especifica la ruta de tu archivo
    std::string linea;

    if(archivo.is_open()){

            getline(archivo, linea);//paso la primera linea q es la q dice la cantidad de particulas
            
            
            uint64_t i = 0;
            while(getline(archivo, linea)){
                uint64_t j = 0;
                std::istringstream iss(linea);
                float number;
                while (iss >> number) {
                    matrix[i][j]=number;
                    j++;
                }
                i++;
                
            }
            
        archivo.close();
    }else {
        std::cout << "No se pudo abrir el archivo de resultados" << std::endl;
        exit(EXIT_FAILURE);
    }

}

void reservarEspacio(Matrix& matrix, uint32_t numRows, uint64_t numCols){

    matrix.resize(numRows);

    // Initialize each row vector and reserve space for columns
    for (size_t i = 0; i < numRows; ++i) {
        std::vector<float> row;
        row.resize(numCols);
        matrix.push_back(row);
    }
}

void setColorRadios(std::vector<sf::CircleShape>& particulas){
    for (auto & shape : particulas){
        shape.setFillColor(sf::Color::Red);
        shape.setRadius(10);
    }
    int aux = 0;
}

void updatePositions(size_t t,Matrix& matrizR,std::vector<sf::CircleShape>& particulas, 
                        float halfWidht, float halfHeight, float zoom ){

    uint32_t i = 0;
    if(matrizR.size()>t){
        for(auto & particula : particulas){
        
        particula.setPosition(zoom * matrizR[t][i] + halfWidht, zoom * matrizR[t][i+1] + halfHeight);
        i=i+2;
        }
    }
}

void dibujarParticulas(sf::RenderWindow& windows,std::vector<sf::CircleShape>&  particulas){

    for(auto & particula : particulas){
        windows.draw(particula);
    }
    

}

namespace Visualizador
{

    void mostrarResultado(std::string path)
    {   
        uint32_t numParticulas = getNColums(path);
        uint64_t numRows = getNrows(path);

        Matrix matrizResultados(numRows, std::vector<float>(numParticulas*2));
        cargarMatriz(matrizResultados, path);

        std::vector<sf::CircleShape> particulas(numParticulas);
        setColorRadios(particulas);


        //window and event creation
        sf::ContextSettings settings;
        settings.antialiasingLevel = 8;

        int WIDHT = 1600;
        int HEIGHT = 900;
        
        sf::RenderWindow window(sf::VideoMode(WIDHT, HEIGHT), "Anti-Aliasing Example", sf::Style::Default, settings);
        window.setFramerateLimit(60);
        sf::Event event;

        size_t frame = 0;
        while (window.isOpen())
        {
            
            //colect events, and close the windows if event is close
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            } 

            updatePositions(frame, matrizResultados, particulas,
                            ((float)WIDHT)/2, ((float)HEIGHT)/2, 20.0f);
            window.clear(sf::Color(23, 30, 33));
            dibujarParticulas(window,particulas);
            window.display();
            
            frame ++;

        }
    }

}
