#ifndef _C_INICALES_
#define _C_INICIALES_

#include <vector>
#include "Particle.h"



Vector2D pos1(-1,0);
Vector2D vel1(0,0);
Vector2D pos2(1,0);
Vector2D vel2(0,0);

Particle particula1(1, pos1, vel1, 10, 1 );
Particle particula2(2,  pos2, vel2, 10, 2);


std::vector <Particle> condicionesInciales = {particula1, particula2};



#endif