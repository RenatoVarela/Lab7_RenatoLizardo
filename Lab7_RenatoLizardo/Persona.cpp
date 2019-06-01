#include "Persona.h"

#include <string.h>
#include <iostream>

using namespace std;

Persona::Persona()
{
}

Persona::Persona(string nacion1, string nombre1, string sexo1, int edad1)
{
    nacion = nacion1;
    nombre = nombre1;
    sexo = sexo1;
    edad = edad1;
}

string Persona::getNacion()
{
    return nacion;
}

string Persona::getNombre()
{
    return nombre;
}
string Persona::getSexo()
{
    return sexo;
}

int Persona::getEdad()
{

    return edad;
}

void Persona::toString()
{
    cout << "Nacion: " << nacion << " Nombre: " << nombre << " Genero: " << sexo << " Edad: " << edad << endl;
    ;
}