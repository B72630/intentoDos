#include "neurona.h"

Neurona::Neurona(){} //Valores de atributos en random ]0,1[
{
    carga= rand() %1; //CREO QUE ES 1; PARA QUE SEA DE 0 A 1 NO INCLUYUENTE *********
    umbral= rand() %1;

}

void Neurona::setConexiones(Lista *neuronas) //Esta neurona se conecta a todas las que reciba en la lista
{
    //Crear conexion; apuntarla a actual; añadir conexion a la lista de conexiones
    for(Nodo *actual = conexiones->cabeza; actual!=NULL ; actual = actual ->getSiguiente()){
        Conexion *nueva(actual); //SE PODRA USAR EL CONSTRUCTOR Y CREARLA COMO PUNTERO?*********
        //Se le pasa la neurona a la que apunta al constructor.
        conexiones.insertar(nueva);   //En nuestra lista insertamos la neurona a la que debemos apuntar***********
    }
}

