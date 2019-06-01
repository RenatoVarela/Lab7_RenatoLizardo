
#include "PoderEspecial.h"
#ifndef INVOCACION_H
#define INVOCACION_H


#include <string>

using std::string;


class Invocacion:public PoderEspecial
{
private:
    
    string nombre_mascota , especie , habilidad, tipo_mascota;

    // nombre, especie, habilidad y tipo de mascota



public:
    Invocacion();
    Invocacion(string,string,string,string,string,string);

    void mostrar();
   
};








#endif