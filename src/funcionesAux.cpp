#include "funcionesAux.hpp"
#include <iostream>

Sistema crearSistema(std::vector<Particula> condicionesInciales){

Sistema sistema;

sistema.particulas = condicionesInciales;



return sistema;
}

void simular(Sistema& sistema){
/*

for( ....){
    if(t=T_INICIAL){
        guardaPosiciones(Sistema);
    }
    aceleraciones = calculoAceleraciones(Sistema);
    nuevasPosiciones(aceleraciones, Sistema);
    guardarPosiciones(Sistema);
} 


*/ 
}

void guardarResultados(Sistema& sistema){


}

void mostraResultados(){

}