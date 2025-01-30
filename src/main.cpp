
#include "particle.h"
#include "Simulator.hpp"
#include "Sistema.hpp"
#include "visualizador.hpp"


int main(int argc, char** argv){

#include "condicionesInciales.h"

Sistema sistema = Simulator::crearSistema(condicionesInciales);
Simulator::simular(sistema);

Visualizador::mostrarResultado("aux");

}