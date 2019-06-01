
#include "Persona.h"
#include "PoderEspecial.h"

#ifndef BENDERS_H
#define BENDERS_H


#include <string>

using std::string;



class Benders:  public Persona{

    public:

    PoderEspecial* poder = new PoderEspecial();


    

    


    public:
    Benders();
    Benders(PoderEspecial*,string , string ,string , int);
    PoderEspecial* getpoder();

    virtual void toString();


};

#endif