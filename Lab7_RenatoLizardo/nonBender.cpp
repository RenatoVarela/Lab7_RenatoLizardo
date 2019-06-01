#include "nonBender.h"

#include <string.h>
#include <iostream>

#include <string>

using namespace std;

nonBender::nonBender()
{
}

nonBender::nonBender(string nacion1, string nombre1, string sexo1, int edad1, string trabajo1, string fuerza1, string velocidad1) : Persona(nacion1, nombre1, sexo1, edad1)
{
    trabajo = trabajo1;
    fuerza = fuerza1;
    velocidad = velocidad1;
}

string nonBender::getTrabajo()
{

    return trabajo;
}
string nonBender::getFuerza()
{
    return fuerza;
}
string nonBender::getVelocidad()
{
    return velocidad;
}

void nonBender::toString()
{
    Persona::toString();
    cout << " trabajo: " << trabajo << " fuerza: " << fuerza << " velocidad: " << velocidad << endl;
}