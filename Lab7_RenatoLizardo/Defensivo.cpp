#include "Defensivo.h"

#include <string.h>
#include <iostream>

using namespace std;


Defensivo::Defensivo(){

}


Defensivo::Defensivo(string nombre1,string nivelPoder1 , string duracion1 , string resitencia1):PoderEspecial(nombre1, nivelPoder1){
    duracion = duracion1;
    resistencia = resitencia1;
}


void Defensivo::mostrar(){
    PoderEspecial::mostrar();

    cout<<" Duracion: " <<duracion << " Resistencia: " << resistencia;

}
