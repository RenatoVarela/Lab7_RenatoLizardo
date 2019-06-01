
#include "PoderEspecial.h"
#ifndef CURATIVO_H
#define CURATIVO_H

#include <string>

using std::string;

class Curativo : public PoderEspecial
{
protected:
    string tipo_curacion;
    


public:
    Curativo(/* args */);
    Curativo(string,string,string);

    void mostrar();
};

#endif