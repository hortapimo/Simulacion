#include "misVectores.h"
#include "sistema.hpp"
#include "particle.h"
#include <cmath>
#include "misVectores.h"

Vector2D fuerza(Sistema&, size_t);

Vector2D calcularFuerzaPar1_R2(Particula, Particula);
Vector2D calcularFuerzaParElectrica(Particula, Particula);
Vector2D calcularFuerzaParDeLennorJones(Particula, Particula);
Vector2D calcularFuerzaPar_SinFuerza(Particula, Particula);

Vector2D fuerza(Sistema& sistema, size_t m){
    Vector2D fAux;
    for(size_t i=0; i < sistema.particulas.size();i++){
        fAux = fAux + calcularFuerzaPar1_R2(sistema.particulas[i], sistema.particulas[m]);//implemetar el +=
    }
    return fAux;
}


Vector2D calcularFuerzaPar1_R2(Particula p1, Particula p2){
    Vector2D aux;
    if (((p1.Posicion.GetX() - p2.Posicion.GetX()) == 0) && ((p1.Posicion.GetY() - p2.Posicion.GetY()) == 0)){
        
    }else{
        aux = p1.Posicion -p2.Posicion;
        float auxMod = std::pow(aux.Dot(aux),1.5);
        float G = 10;
        aux = (aux*G*p1.masa*p2.masa)/auxMod;
    }

    return aux;
}

/*
Vector2D calcularFuerzaParElectrica(Particula p1, Particula p2){

}

Vector2D calcularFuerzaParDeLennorJones(Particula p1, Particula p2){

}

Vector2D calcularFuerzaPar_SinFuerza(Particula p1, Particula p2){

}
*/






