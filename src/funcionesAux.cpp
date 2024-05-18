#include "funcionesAux.hpp"
#include <iostream>
#include <cstdlib>

#include "fuerza.hpp"


static std::string pathResultados = "resultados/resultados.txt";

Sistema crearSistema(std::vector<Particula> condicionesInciales){

Sistema sistema;

sistema.particulas = condicionesInciales; //Abria que ver de pasar como referencia para no copiar




return sistema;
}

void simular(Sistema& sistema){
    
    #include "parametrosIniciales.hpp"//ver porque tengo que ponerlo aca para que ande

    for(float t=T_INICIAL; t<T_FINAL; t+=DELTA_T ){
        if(t==T_INICIAL){
            crearArchivo(sistema);
            guardarPosiciones(sistema,t);
        }
        std::vector<Vector2D> aceleraciones = calculoAceleraciones(sistema);
        nuevasPosiciones(aceleraciones, sistema, DELTA_T);
        guardarPosiciones(sistema,t);
    } 
}

void guardarResultados(Sistema& sistema){


}

std::vector<Vector2D> calculoAceleraciones(Sistema & sistema){
    std::vector<Vector2D> aceleraciones;

    for(size_t i = 0; i<sistema.particulas.size();i++){
        aceleraciones.push_back(fuerza(sistema, i)*(1/sistema.particulas[i].masa));
    }
    return aceleraciones;
}

void crearArchivo(Sistema & sistema){

    std::ofstream archivo(pathResultados);

    // Verificar si el archivo se pudo abrir (es decir, si se creó correctamente)
    if (archivo.is_open()) {
        // Escribir en el archivo
        archivo << "NumeroParticulas " << sistema.particulas.size()<<"\n";
        std::cout <<"NumeroParticulas " << sistema.particulas.size()<<"\n";
        // Cerrar el archivo
        archivo.close();
    } else {
        std::cerr << "No se pudo abrir o crear el archivo." << std::endl;
        exit(EXIT_FAILURE);
    }


}

void guardarPosiciones(Sistema& sistema, float tiempo){

    std::ofstream archivo(pathResultados,std::ios::app);

    // Verificar si el archivo se abrió correctamente
    if (archivo.is_open()) {
        // Escribir los elementos del vector en el archivo
        archivo << tiempo;
        for (size_t i = 0; i < sistema.particulas.size(); ++i) {
            archivo << " "<< sistema.particulas[i].Posicion.GetX() <<' '<<sistema.particulas[i].Posicion.GetY();
        }
        // Cerrar el archivo
        archivo << "\n";
        archivo.close();
    } else {
        std::cerr << "No se pudo abrir el archivo." << std::endl;
    }


}

void mostraResultados(){

}

void nuevasPosiciones(std::vector<Vector2D> aceleraciones, Sistema & sistema, float deltaT){
    Vector2D deltaVel;
    Vector2D deltaPos;

    //Voy hacer un euler sencillito para resolver la ED
    for (size_t i = 0; i<aceleraciones.size(); i++){
        deltaVel = aceleraciones[i]*deltaT;
        sistema.particulas[i].Velocidad = sistema.particulas[i].Velocidad + deltaVel;

        deltaPos = sistema.particulas[i].Velocidad*deltaT;
        sistema.particulas[i].Posicion = sistema.particulas[i].Posicion + deltaPos; 

        std::cout<< sistema.particulas[i].Posicion.GetX()<<"\n";
    }

}