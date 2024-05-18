#include "particle.h"

Particula::Particula(int idAux, Vector2D posAux, Vector2D velAux,
     double masaAux, double cargaAux)
{
    masa = masaAux;
    carga = cargaAux;
    id = idAux;
    Posicion = posAux;
    Velocidad = velAux;
}

