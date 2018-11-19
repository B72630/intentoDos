#ifndef CONEXION_H
#define CONEXION_H

#include <cstdlib>
#include "neurona.h"
template<class T>

class Conexion
{
    Neurona<T> r; //A quien apunta esta conexion.

    float peso;
public:
    Conexion(Neurona<T>* receptora); //Se le pasa al constructor la neurona a la que va a apuntar
    ~ Conexion(){delete r;}
};

#endif // CONEXION_H
