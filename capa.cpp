#include "capa.h"

Capa::Capa(int numeroNeuronas) //Crea una capa con x numero de neuronas
{
    for(int i =0; i< numeroNeuronas ; i++){
        Neurona *a = new Neurona; //Aqui para que cada vez las neuronas tengan un nuevo numero rand?************
        /*importante lo de arriba*/
        neuronas -> Insertar(a); //Añadir la neurona recien creada a la lista de neuronas de la capa
    }
}

void Capa::EstablecerConexiones(Capa *proxima)
{
    Nodo *actual; //Por donde vamos en nuestra capa.
    for(actual = neuronas->cabeza; actual!=NULL; actual= actual->getSiguiente()){ //Por cada una de nuestras neuronas
        Nodo *otraCapa;
        for(otraCapa = proxima->neuronas->cabeza; otraCapa!=NULL; otraCapa = otraCapa->getSiguiente() ){
            //Establecer conexion con cada una de las neuronas de la otra capa
            actual->conexiones->Insertar(otraCapa);
            //En la lista de conexiones de la neurona actual; insertar "otracapa"
        }
    }
}

int Capa::numeroNeuronas() //Devuelve numero de neuronas en capa
{
    int num = 0;
    for(Nodo *actual = neuronas->cabeza; actual!=NULL; actual= actual->getSiguiente()){
        num++;
    }
    return num;
}
