#include "Persona.h"
#ifndef NONBENDER_H
#define NONBENDER_H


#include <string>

using std::string;

class nonBender : public Persona{

    private:

    string trabajo,fuerza,velocidad;

    public:

    nonBender();
    nonBender(string , string ,string , int, string,string,string);

    string getTrabajo();
    string getFuerza();
    string getVelocidad();
   

    void toString();



};







#endif