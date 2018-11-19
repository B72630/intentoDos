#ifndef NODOLISTA_H
#define NODOLISTA_H

#include <iostream>
using namespace std;


template <class T>

class NodoLista{
    NodoLista<T> *siguiente;
    T dato;

    public:
        NodoLista(T dato){this->dato = dato; }
        ~NodoLista(){delete siguiente;}

        T getDato(){return dato;}
        void setDato(T num){this->dato = num;}

        NodoLista *getSiguiente(){return siguiente;}
        void setSiguiente(NodoLista<T> *n) {siguiente = n;}

};

#endif // NODOLISTA_H
