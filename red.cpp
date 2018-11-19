#include "red.h"

Red::Red()
{
    capas->cabeza = NULL; //Red inicia vacia
}

void Red::AgregarCapa(int numNeuronas) //A nuestra lista de Capas; agregamos una capa recien creada con X neuronas
{
    Capa *nueva = new Capa(numNeuronas); //Creamos capa
    capas->Insertar(nueva); //Agregamos la capa a la red

}

void Red::ConectarRed() //Conectar las neuronas en la red
{
    //Recorrer las capas y decirle a cada capa que se conecte con la siguiente;
    for(Nodo *actual =capas->cabeza ; actual!=NULL; actual=actual->siguiente){ //Para cada capa actual
        if(actual->siguiente!=NULL){ //Si existe una capa despues de esta
            //Decirle a la capa actual que se conecte con la proxima
            actual->EstablecerConexiones(actual->siguiente);
        }
    }
}

int Red::getNumCapas() //Devuelve cuantas capas tiene la red
{
    int num = 0;
    for(Nodo *actual = capas->cabeza; actual!=NULL; actual= actual->getSiguiente()){
        num++;
    }
    return num;
}


