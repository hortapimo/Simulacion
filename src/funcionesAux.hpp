#ifndef _FUNCIONES_AUX_H_
#define _FUNCIONES_AUX_H_

#include <vector>
#include <fstream>

#include "sistema.hpp"
#include "particle.h"
#include "misVectores.h"


Sistema crearSistema(std::vector<Particula>);

void simular(Sistema& sistema);

void crearArchivo(Sistema & sistema);

void guardarResultados(Sistema& sistema);

void mostraResultados();

void nuevasPosiciones(std::vector<Vector2D> aceleraciones, Sistema & sistema, float deltaT);

std::vector<Vector2D> calculoAceleraciones(Sistema & sistema);

void guardarPosiciones(Sistema&, float);

#endif