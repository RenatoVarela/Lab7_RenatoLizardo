#include "FireBender.h"

#include <string.h>
#include <iostream>

#include <string>

using namespace std;

FireBender::FireBender()
{
}

FireBender::FireBender(PoderEspecial *poder1, string nacion1, string nombre1, string sexo1, int edad1, int victorias1, int sicatrices1) : Benders(poder1, nacion1, nombre1, sexo1, edad1)
{

    victorias = victorias1;

    cicatrices = sicatrices1;
}

int FireBender::getVictorias()
{

    return victorias;
}
int FireBender::getCicatrices()
{

    return cicatrices;
}

void FireBender::toString()
{
    Benders::toString();
    cout << " Victorias en pai sho: " << victorias << " Cicatrices: " << cicatrices << endl;
}