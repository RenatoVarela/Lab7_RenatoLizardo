#include "AirBender.h"

#include <string.h>
#include <iostream>


#include <string>


using namespace std;



AirBender::AirBender(){

}



AirBender::AirBender(PoderEspecial* poder1, string nacion1 , string nombre1 ,string sexo1 , int edad1, int pelo1 , string color1):Benders(poder1, nacion1 ,nombre1 , sexo1 , edad1){

    pelo = pelo1;
    color = color1;
}


string AirBender::getColor(){
    return color;

}
    int AirBender::getPelo(){

        return pelo;

    }














void AirBender::toString(){
    Benders::toString();
    cout<<" Pelo: " <<pelo << " Color de flecha: " <<color <<endl;

    
    
}
