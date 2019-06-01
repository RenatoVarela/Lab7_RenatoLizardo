#include "Ofensivo.h"

#include <string.h>
#include <iostream>

using namespace std;


Ofensivo::Ofensivo(){

}


Ofensivo::Ofensivo(string nombre1,string nivelPoder1 , string rango1 , string fuerza1):PoderEspecial(nombre1, nivelPoder1){
    rango = rango1;
    fuerza = fuerza1;

}


string Ofensivo::getRango(){
    return rango;

}
    string Ofensivo::getFuerza(){
        return fuerza;

    }


void Ofensivo::mostrar(){
    PoderEspecial::mostrar();

    cout<<" El rango es: " <<rango << " La fuerza es: " <<fuerza;

}
