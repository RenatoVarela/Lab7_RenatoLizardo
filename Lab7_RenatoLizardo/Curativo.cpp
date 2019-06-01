#include "Curativo.h"

#include <string.h>
#include <iostream>

using namespace std;


Curativo::Curativo(){

}


Curativo::Curativo(string nombre1,string nivelPoder1 , string tipo_Curacion1):PoderEspecial(nombre1, nivelPoder1){
    tipo_curacion = tipo_Curacion1;
}


void Curativo::mostrar(){
    PoderEspecial::mostrar();

    cout<<" El tipo de curacion es: " <<tipo_curacion;

}