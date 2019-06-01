#include "WaterBender.h"

#include <string.h>
#include <iostream>

#include <string>

using namespace std;

WaterBender::WaterBender()
{
}

WaterBender::WaterBender(PoderEspecial *poder1, string nacion1, string nombre1, string sexo1, int edad1, string tribu1, string arma1) : Benders(poder1, nacion1, nombre1, sexo1, edad1)
{

  tribu = tribu1;

  arma = arma1;
}

string WaterBender::getTribu()
{
  return tribu;
}



string WaterBender::getArma()
{
  return arma;
}

void WaterBender::toString()
{
  Benders::toString();
  cout << " Tribu: " << tribu << " Arma Favorita: " << arma << endl;
}