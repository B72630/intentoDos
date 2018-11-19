#include "conexion.h"
template <class T>

 Conexion::Conexion(Neurona<T>* receptora)
{
    r= receptora; //A quien va a apuntar
    peso = rand() %1;
}
