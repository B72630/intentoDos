#ifndef RED_H
#define RED_H
#include "capa.h"
template <class T>
class Red
{
    Lista<T> *capas; //Lista de las capas que tiene
public:
    Red();
    ~Red(){delete capas;}
    void AgregarCapa(int numNeuronas);
    void ConectarRed();
    int getNumCapas();
};

#endif // RED_H
