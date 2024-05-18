#ifndef _C_INICALES_
#define _C_INICIALES_

#include <vector>
#include "particle.h"

Vector2D pos1(-1,0);
Vector2D vel1(0,0);
Vector2D pos2(1,0);
Vector2D vel2(0,0);

Particula particula1(1, pos1, vel1, 10, 1 );
Particula particula2(2,  pos2, vel2, 10, 2);


std::vector <Particula> condicionesInciales = {particula1, particula2};

#endif