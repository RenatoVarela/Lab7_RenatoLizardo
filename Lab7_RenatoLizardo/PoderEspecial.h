

#ifndef PODERESPECIAL_H
#define PODERESPECIAL_H


#include <string>

using std::string;


class PoderEspecial{

    private:
    string nombre, nivelPoder;




    public:

    PoderEspecial();

    PoderEspecial(string,string);

    string getNombreP();
    string getNivelPoder();
    

    virtual void mostrar();


};


#endif