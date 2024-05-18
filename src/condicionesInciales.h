#ifndef _C_INICALES_
#define _C_INICIALES_

#include <vector>
#include "particle.h"

Vector2D pos1(0,1);
Vector2D vel1(1,2);
Vector2D pos2(1,0.5);
Vector2D vel2(5,2);

Particula particula1(1, pos1, vel1, 10, 1 );
Particula particula2(2,  pos2, vel2, 2, 2);


std::vector <Particula> condicionesInciales = {particula1, particula2};

#endif