#include "funcionesAux.hpp"
#include <iostream>
#include <cstdlib>

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
            guardarPosiciones(sistema);
            std::cout<<"entro\n";
        }
    //aceleraciones = calculoAceleraciones(sistema);
    //nuevasPosiciones(aceleraciones, sistema);
    guardarPosiciones(sistema);
    } 
}

void guardarResultados(Sistema& sistema){


}

void crearArchivo(Sistema & sistema){

    std::ofstream archivo(pathResultados);

    // Verificar si el archivo se pudo abrir (es decir, si se creó correctamente)
    if (archivo.is_open()) {
        // Escribir en el archivo
        archivo << "NumeroParticulas" << sistema.particulas.size()<<"\n";
        std::cout <<"NumeroParticulas" << sistema.particulas.size()<<"\n";
        // Cerrar el archivo
        archivo.close();
    } else {
        std::cerr << "No se pudo abrir o crear el archivo." << std::endl;
        exit(EXIT_FAILURE);
    }


}

void guardarPosiciones(Sistema& sistema){

    std::ofstream archivo(pathResultados,std::ios::app);

    // Verificar si el archivo se abrió correctamente
    if (archivo.is_open()) {
        // Escribir los elementos del vector en el archivo
        for (size_t i = 0; i < sistema.particulas.size(); ++i) {
            archivo << sistema.particulas[i].xPos <<' '<<sistema.particulas[i].yPos << std::endl;
        }
        // Cerrar el archivo
        archivo.close();
    } else {
        std::cerr << "No se pudo abrir el archivo." << std::endl;
    }


}

void mostraResultados(){

}