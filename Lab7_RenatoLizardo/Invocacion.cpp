#include "Invocacion.h"

#include <string.h>
#include <iostream>

using namespace std;



Invocacion::Invocacion(){

}


// nombre, especie, habilidad y tipo de mascota

Invocacion::Invocacion(string nombre1,string nivelPoder1 , string nombre_mascota1, string especie1 ,string habilidad1 ,string mascota1):PoderEspecial(nombre1, nivelPoder1){
   nombre_mascota = nombre_mascota1;
   especie = especie1;
   habilidad = habilidad1;
   tipo_mascota = mascota1;


}






void Invocacion::mostrar(){
    PoderEspecial::mostrar();

    cout<<" Nombre Mascota: " <<nombre_mascota << " Especie: " << especie  <<" Habilidad: " <<habilidad << " Tipo Mascota: " << tipo_mascota;

}