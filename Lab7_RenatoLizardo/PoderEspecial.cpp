#include "PoderEspecial.h"

#include <string.h>
#include <iostream>

using namespace std;

PoderEspecial::PoderEspecial()
{
}

PoderEspecial::PoderEspecial(string nombre1, string nivelPoder1)
{
    nombre = nombre1;
    nivelPoder = nivelPoder1;
}

string PoderEspecial::getNombreP()
{
    return nombre;
}
string PoderEspecial::getNivelPoder()
{
    return nivelPoder;
}

void PoderEspecial::mostrar()
{
    cout << " Nombre del POder: " << nombre << " Nivel de poder: " << nivelPoder;
}