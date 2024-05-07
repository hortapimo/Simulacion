#ifndef _PARTICLE_H_
#define _PARTICLE_H_

#include "misVectores.h"

class Particula
{
private:

public:
    Particula(int idAux, double xPosAux, double yPosAux);
    
    int id;
    double xPos, yPos;
    double xVel, yVel = 0;
    double mass;
    double charge;
};


#endif