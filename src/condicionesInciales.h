#ifndef _C_INICALES_
#define _C_INICIALES_

#include <vector>
#include "Particle.h"



Vector2D pos1(-1,2);
Vector2D vel1(0,0);

Vector2D pos2(1,4);
Vector2D vel2(0,0);

Vector2D pos3(-0.5,6);
Vector2D vel3(0,0);

Vector2D pos4(5,9);
Vector2D vel4(0,0);

Vector2D pos5(-4,-3);
Vector2D vel5(0,0);

Vector2D pos6(11,-1);
Vector2D vel6(0,0);


Particle particula1(1, pos1, vel1, 10, 1 );
Particle particula2(2,  pos2, vel2, 10, 2);
Particle particula3(1, pos3, vel3, 10, 1 );
Particle particula4(2,  pos4, vel4, 10, 2);
Particle particula5(1, pos5, vel5, 10, 1 );
Particle particula6(2,  pos6, vel6, 10, 2);

std::vector <Particle> condicionesInciales = {particula1, particula2, particula3, particula4, particula5, particula6};

#endif