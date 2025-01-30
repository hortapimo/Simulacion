#include "Particle.h"

Particle::Particle(int _id, Vector2D _pos, Vector2D _vel,
     double _masa, double _carga)
{
    this->masa = _masa;
    this->carga = _carga;
    this->id = _id;
    this->Posicion = _pos;
    this->Velocidad = _vel;
}

