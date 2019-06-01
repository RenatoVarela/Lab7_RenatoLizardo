#include "Benders.h"
#ifndef WATERBENDER_H
#define WATERBENDER_H


#include <string>

using std::string;

class WaterBender : public Benders {

    private:

    string tribu, arma;

    public:

    WaterBender();
    WaterBender(PoderEspecial*,string , string ,string , int , string,string);

    string getTribu();
    string getArma();

    void toString();



};


#endif