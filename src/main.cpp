#include "main.h"

int main(int argc, char** argv){

#include "parametrosIniciales.hpp"
#include "condicionesInciales.h"

Sistema sistema = crearSistema(condicionesInciales);
simular(sistema);
guardarResultados(sistema);

mostraResultados();

}