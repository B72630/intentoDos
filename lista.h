#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

#include "nodolista.h"

template <class T>

class Lista{
   NodoLista<T> *cabeza;

public:
   Lista<T>(){ cabeza= nullptr ;}
   void Insertar(T dato){
       if(cabeza == nullptr){
           NodoLista<T> nodo = new NodoLista<T>(dato);
           cabeza = nodo;

       }else{
            NodoLista<T> nodo = new NodoLista<T>(dato);
            NodoLista<T> temp = cabeza;
            cabeza = nodo;
            cabeza->setSiguiente(temp);
       }
   }
   ~Lista(){delete cabeza;}
   int Longitud(){
       NodoLista<T> *nodo = cabeza;
       int contador = 0;
       while(nodo != nullptr){

           contador++;
           nodo = nodo->getSiguiente();
       }

       return contador;
   }
   T getPosicionI(int posicion){
       NodoLista<T> *nodo = cabeza;
       int contador = 0;
       while(nodo != nullptr && contador<posicion){
           contador++;
           nodo = nodo->getSiguiente();
       }

       return nodo!=nullptr?nodo->getDato():nullptr;
   }

};



#endif // LISTA_H
