#ifndef _PARTICLE_H_
#define _PARTICLE_H_

#include "misVectores.h"

class Particle //esto podria ser una estructura tranquilamente
{
private:

public:
    Particle(int idAux, Vector2D posAux, Vector2D velAux,
     double masaAux, double cargaAux);
    
    int id;
    Vector2D Posicion;
    Vector2D Velocidad;
    double masa;
    double carga;
};


#endif