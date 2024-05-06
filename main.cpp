#include "main.h"

int main(int argc, char** argv){

#include "parametrosIniciales.hpp"

Sistema sistema = crearSistema();
simular(sistema);
guardarResultados(sistema);

mostraResultados();

}