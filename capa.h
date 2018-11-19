#ifndef CAPA_H
#define CAPA_H

#include "neurona.h"
#include "lista.h"
template <class T>

class Capa
{
   Lista<T>* neuronas;
public:
    Capa(int numeroNeuronas);
    ~ Capa(){delete neuronas;}
    void EstablecerConexiones(Capa* proxima);
    int numeroNeuronas();
};

#endif // CAPA_H
