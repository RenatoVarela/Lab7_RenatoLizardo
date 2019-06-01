#include "Benders.h"
#ifndef EARTHBENDER_H
#define EARTHBENDER_Hs


#include <string>

using std::string;


class EarthBender : public Benders {

    private:

    int coles = 0;
    string graduacion;

    public:

    EarthBender();
    EarthBender(PoderEspecial* , string , string ,string , int, int ,string);

    int getColes();
    string getGraduacion();

    void toString();



};




#endif