


#include "PoderEspecial.h"
#ifndef OFENSIVO_H
#define OFENSIVO_H


#include <string>

using std::string;



class Ofensivo:public PoderEspecial{

    private:
    string rango, fuerza;




    public:
     Ofensivo();

     Ofensivo(string,string,string,string);

     string getRango();
    string getFuerza();

     void mostrar();


};







#endif