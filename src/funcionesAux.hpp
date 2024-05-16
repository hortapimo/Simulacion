#ifndef _FUNCIONES_AUX_H_
#define _FUNCIONES_AUX_H_

#include <vector>
#include <fstream>

#include "sistema.hpp"
#include "particle.h"


Sistema crearSistema(std::vector<Particula>);

void simular(Sistema& sistema);

void crearArchivo(Sistema & sistema);

void guardarResultados(Sistema& sistema);

void mostraResultados();

void guardarPosiciones(Sistema&);

#endif