#include "particle.h"

Particula::Particula(size_t idAux, float xPosAux, float yPosAux): 
    id{idAux}, xPos{xPosAux}, yPos{yPosAux} //esta es una forma de inicializar, 
    //es la unica si hay que inicializar una clase.
{
}

Particula::Particula(size_t idAux, Vector2D & vecAux): 
    id{idAux}, xPos{vecAux.GetX()}, yPos{vecAux.GetY()} //esta es una forma de inicializar, 
    //es la unica si hay que inicializar una clase.
{
}

