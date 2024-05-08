#ifndef _C_INICALES_
#define _C_INICIALES_

#include <vector>
#include "particle.h"

Particula particula1(1, 1.0, 1.0);
Particula particula2(2, 1.0, 3.0);


std::vector <Particula> condicionesInciales = {particula1, particula2};

#endif