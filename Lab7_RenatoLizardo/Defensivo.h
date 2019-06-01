#include "PoderEspecial.h"
#ifndef DEFENSIVO_H
#define DEFENSIVO_H

#include <string>

using std::string;

class Defensivo : public PoderEspecial
{
private:
    string resistencia, duracion;


public:
    Defensivo(/* args */);
    Defensivo(string,string,string,string);

    string getResistencia();
    string getDuracion();

   
    
    void mostrar();
};

#endif