#ifndef _PARTICLE_H_
#define _PARTICLE_H

#include "misVectores.h"
#include "misVectores.h"

class particle
{
private:
    size_t id;
    float xPos, yPos;
    float xVel, yVel;
    float xAc, yAc;
    float mass;
    float charge;

public:
    particle(size_t idAux, Vector2D &);
    particle(size_t idAux, float xPosAux, float yPosAux);
};


#endif