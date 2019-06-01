#include "EarthBender.h"

#include <string.h>
#include <iostream>


#include <string>


using namespace std;


EarthBender::EarthBender(){

}





EarthBender::EarthBender(PoderEspecial* poder1, string nacion1 , string nombre1 ,string sexo1 , int edad1, int coles1, string graduacion1):Benders(poder1, nacion1 ,nombre1 , sexo1 , edad1){

    coles = coles1;

    graduacion = graduacion1;
}



 int EarthBender::getColes(){
     return coles;

 }
    string EarthBender::getGraduacion(){
        return graduacion;

    }



void EarthBender::toString(){
    Benders::toString();
    cout<<" COles: " <<coles << " Graduacion: " << graduacion <<endl;
    cout<<"---------------------------------------------------"<<endl;
    
}

