#include "Benders.h"
#ifndef AIRBENDER_H
#define AIRBENDER_H


#include <string>

using std::string;



class AirBender : public Benders {

    private:

    int pelo = 0;
    string color;

    public:

    AirBender();
    AirBender(PoderEspecial*,string , string ,string , int , int,string);

   
    string getColor();
    int getPelo();

    void toString();



};





#endif