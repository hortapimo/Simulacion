#ifndef _PARTICLE_H_
#define _PARTICLE_H

#include "misVectores.h"
#include "misVectores.h"

class Particula
{
private:
    size_t id;
    float xPos, yPos;
    float xVel, yVel = 0;
    float mass;
    float charge;

public:
    Particula(size_t idAux, Vector2D &);
    Particula(size_t idAux, float xPosAux, float yPosAux);
};


#endif