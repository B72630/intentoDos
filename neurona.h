#ifndef NEURONA_H
#define NEURONA_H

#include "cstdlib"
#include "lista.h"
template <class T>

class Neurona
{
    float carga;
    float umbral;
    Lista<T>* conexiones;

public:
    Neurona(); //Se crea sin apuntar a nada. Despues de crearse las capas; se le dice a quien apunta modificando su lista
    ~ Neurona(){delete conexiones; delete carga; delete umbral;} // verificar sihay que destruir los float
    void setConexiones(Lista<T>* neuronas); //Recibir la lista de neuronas para establecer las conexiones.
    /*En capa se llamara a este metodo con un for para cada neurona establecer las conexiones.*/

};

#endif // NEURONA_H
