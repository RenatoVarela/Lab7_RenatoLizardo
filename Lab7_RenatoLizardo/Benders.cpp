#include "Benders.h"

#include <string.h>
#include <iostream>


#include <string>

using std::string;


using namespace std;


Benders::Benders(){


}



Benders::Benders(PoderEspecial* poder1, string nacion1 , string nombre1 ,string sexo1 , int edad1) : Persona(nacion1 , nombre1 , sexo1 , edad1){
    poder = poder1;
    

}


PoderEspecial* Benders::getpoder(){
    return poder;
}




void Benders::toString(){
    
    Persona::toString();
    poder->mostrar();


}