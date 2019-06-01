#include "Persona.h"
#include "Benders.h"
#include "PoderEspecial.h"
#include "AirBender.h"
#include "WaterBender.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "FireBender.h"
#include "nonBender.h"
#include "Invocacion.h"
#include "Curativo.h"
#include "EarthBender.h"
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <string>

#include <iostream>
#include <typeinfo>

using namespace std;

Persona *AgregarPersonas();
PoderEspecial *AgregarPoder();

void guardar();

int eliminar;

vector<Persona *> personas;

int main()
{

    bool exit = false;
    int opciones = 0;

    while (exit == false)
    {

        cout << "Ingrese el una de las siguientes opciones 1)Agreagar a una Persona" << endl
             << "2)Eliminar a una persona " << endl
             << "3)Mostrar Personas" << endl
             << "4)Cualquier otro para salir " << endl;

        cin >> opciones;

        switch (opciones)
        {
        case 1:

            AgregarPersonas();

            break;

        case 2:
            cout << "INgrese la posicion de la persona a la que desea eliminar" << endl;
            cin >> eliminar;

            if (eliminar < personas.size() && eliminar >= 0)
            {
                personas.erase(begin(personas) + eliminar);
            }
            else
            {
                cout << "esa posicion no existe" << endl;
            }

            break;

        case 3:

            cout << "Agua:" << endl;

            for (int i = 0; i < personas.size(); i++)
            {

                if (typeid(*personas[i]) == typeid(WaterBender))
                {
                    personas[i]->toString();
                    cout << "-----------------------------------------------------" << endl;
                }
            }

            cout << "Tierra:" << endl;

            for (int i = 0; i < personas.size(); i++)
            {

                if (typeid(*personas[i]) == typeid(EarthBender))
                {
                    personas[i]->toString();
                    cout << "-----------------------------------------------------" << endl;
                }
            }


            cout << "Fuego:" << endl;

            for (int i = 0; i < personas.size(); i++)
            {

                if (typeid(*personas[i]) == typeid(FireBender))
                {
                    personas[i]->toString();
                    cout << "-----------------------------------------------------" << endl;
                }
            }


            cout << "Aire:" << endl;

            for (int i = 0; i < personas.size(); i++)
            {

                if (typeid(*personas[i]) == typeid(AirBender))
                {
                    personas[i]->toString();
                    cout << "-----------------------------------------------------" << endl;
                }
            }

            cout << "Nada:" << endl;
            for (int i = 0; i < personas.size(); i++)
            {

                if (typeid(*personas[i]) == typeid(nonBender))
                {
                    personas[i]->toString();
                    cout << "-----------------------------------------------------" << endl;
                }
            }

            /*
            for (int i = 0; i < personas.size(); i++)
            {
                personas[i]->toString();
                cout << "-----------------------------------------------------" << endl;
            }*/

            break;

        default:

            //al momento de salir se guarda en el archivo de texto
            guardar();
            exit = true;
            break;
        }
    }
}

Persona *AgregarPersonas()
{

    string nacion;
    string nombre;
    string sexo;
    int edad;

    ///variables de los maestros
    int pelo = 0;
    string color;

    int coles = 0;
    string graduacion;

    int victorias = 0, cicatrices = 0;

    string tribu, arma;

    string trabajo, fuerza, velocidad;

    int opcion = 0;

    int tipo_poder = 0;

    //variables de los maestros

    //string valoElectric , valorTransmiscion;

    Benders *persona;
    Persona *persona2; //para los no maestros
    PoderEspecial *poder;

    cout << "Ingrese la nacion de la Persona" << endl;
    cin >> nacion;

    cout << "INgrese el nombre de la persona" << endl;
    cin >> nombre;

    cout << "Ingrese el genero  de la persona" << endl;
    cin >> sexo;

    cout << "Ingrese la edad de la persona" << endl;
    cin >> edad;

    cout << "Ingrese el una de las siguientes opciones" << endl
         << "1)Si es maestro aire" << endl
         << "1)Si es maestro agua" << endl
         << "3)Si es maestro tierra" << endl
         << "4)Si es maestro fuego" << endl
         << "5)Cualquier no es maestro " << endl;

    cin >> opcion;

    switch (opcion)
    {
    case 1:

        poder = AgregarPoder();
        cout << "INgrese la cantidad de pelo " << endl;
        cin >> pelo;

        cout << " INgrese el color de la flecha " << endl;
        cin >> color;

        persona = new AirBender(poder, nacion, nombre, sexo, edad, pelo, color);
        personas.push_back(persona);

        break;

    case 2:
        poder = AgregarPoder();

        cout << "INgrese la tribu " << endl;
        cin >> tribu;

        cout << " INgrese el arma favorita  " << endl;
        cin >> arma;

        persona = new WaterBender(poder, nacion, nombre, sexo, edad, tribu, arma);
        personas.push_back(persona);

        break;

    case 3:

        poder = AgregarPoder();

        cout << "INgrese la cantidad de coles plantadas " << endl;
        cin >> coles;

        cout << " INgrese el color de la graduacion " << endl;
        cin >> graduacion;

        persona = new EarthBender(poder, nacion, nombre, sexo, edad, coles, graduacion);
        personas.push_back(persona);

        break;

    case 4:

        poder = AgregarPoder();

        cout << "INgrese la cantidad de vicetoria " << endl;
        cin >> victorias;

        cout << " INgrese el color de las cicatrizes " << endl;
        cin >> cicatrices;

        persona = new FireBender(poder, nacion, nombre, sexo, edad, victorias, cicatrices);
        personas.push_back(persona);

        break;

    default:
        cout << "INgrese la cantidad el trabajo " << endl;
        cin >> trabajo;

        cout << " INgrese el la fuerza " << endl;
        cin >> fuerza;

        cout << " INgrese el la velocidad " << endl;
        cin >> velocidad;

        persona2 = new nonBender(nacion, nombre, sexo, edad, trabajo, fuerza, velocidad);
        personas.push_back(persona2);

        break;
    }

    //carro = new Carros(nombre, modelo, new Chasis(ruedas, transmision), new Motor(electrico, configuracion), new Pintura(color, acabado));

    return persona;
}

PoderEspecial *AgregarPoder()
{

    string nombre_p, nivelPoder;

    PoderEspecial *poder;

    string rango, fuerza;
    string tipo_curacion;
    string resistencia, duracion;
    string nombre_mascota, especie, habilidad, tipo_mascota;

    int opcion = 0;

    cout << "INgrese el nombre del poder especial" << endl;
    cin >> nombre_p;

    cout << "INgrese el nivel de poder" << endl;
    cin >> nivelPoder;

    cout << "Ingrese el una de las siguientes opciones" << endl
         << "1)Si poder es ofensivo " << endl
         << "1)Si poder es defensivo " << endl
         << "3)Si su poder es curativo" << endl
         << "4)Cualquier es de invocacion " << endl;

    cin >> opcion;

    //Switch para poder

    switch (opcion)
    {
    case 1:
        cout << "INgrese el rango " << endl;
        cin >> rango;

        cout << "INgrese la fuerza" << endl;
        cin >> fuerza;

        poder = new Ofensivo(nombre_p, nivelPoder, rango, fuerza);

        break;

    case 2:
        cout << "INgrese la resistencia " << endl;
        cin >> resistencia;

        cout << "INgrese la duravilidad " << endl;
        cin >> duracion;

        poder = new Defensivo(nombre_p, nivelPoder, resistencia, duracion);

        break;

    case 3:

        cout << "Tipo de curacion " << endl;
        cin >> tipo_curacion;

        poder = new Curativo(nombre_p, nivelPoder, tipo_curacion);

        break;

    default:

        //nombre_mascota , especie , habilidad, tipo_mascota;
        cout << "INgrese el nombre de la mascota " << endl;
        cin >> nombre_mascota;

        cout << " INgrese la especie de la mascota" << endl;
        cin >> especie;

        cout << " INgrese la habilidad de la mascota" << endl;
        cin >> habilidad;

        cout << " INgrese el tipo de mascota" << endl;
        cin >> tipo_mascota;

        poder = new Invocacion(nombre_p, nivelPoder, nombre_mascota, especie, habilidad, tipo_mascota);
        break;
    }

    return poder;
}

void guardar()
{

    //otra forma: obtener un apuntador tipo circulo
    /*
    Circulo* circulo2 = dynamic_cast<Circulo*>(circulo);

    cout<<"El radio es: " << circulo2->getRadio()<< endl;

    cout<<"aja " << circulo2->toString() <<endl;

    delete circulo;
*/

    fstream archivo("registro.txt");

    Benders *bender;
    AirBender *aire;
    FireBender *fuego;
    WaterBender *agua;
    EarthBender *tierra;
    nonBender *nada;

    if (!archivo.is_open())
    {
        archivo.open("registro.txt", ios::ate);
    }

    for (int i = 0; i < personas.size(); i++)
    {

        archivo << "Nacion: " << personas[i]->getNacion() << endl;
        archivo << "Nombre: " << personas[i]->getNombre() << endl;
        archivo << "Edad: " << personas[i]->getEdad() << endl;
        archivo << "Genero: " << personas[i]->getSexo() << endl;

        if (typeid(*personas[i]) == typeid(AirBender) || typeid(*personas[i]) == typeid(FireBender) || typeid(*personas[i]) == typeid(WaterBender) || typeid(*personas[i]) == typeid(EarthBender))
        {
            cout << "aqui si entra" << endl;
            bender = dynamic_cast<Benders *>(personas[i]);
            archivo << "Nombre poder " << bender->poder->getNombreP() << endl;

            if (typeid(*bender) == typeid(AirBender))
            {
                aire = dynamic_cast<AirBender *>(bender);

                archivo << "COlor flecha: " << aire->getColor() << endl;
                archivo << "Cantidad: " << aire->getPelo() << endl;
            }
            else if (typeid(*bender) == typeid(FireBender))
            {

                fuego = dynamic_cast<FireBender *>(bender);

                archivo << "victorias: " << fuego->getVictorias() << endl;
                archivo << "Cicatrices: " << fuego->getCicatrices() << endl;
            }
            else if (typeid(*bender) == typeid(EarthBender))
            {
                tierra = dynamic_cast<EarthBender *>(bender);

                archivo << "Cantidad de coles: " << tierra->getColes() << endl;
                archivo << "Graduacion: " << tierra->getGraduacion() << endl;
            }
            else if (typeid(*bender) == typeid(WaterBender))
            {
                agua = dynamic_cast<WaterBender *>(bender);

                archivo << "Tribu: " << agua->getTribu() << endl;
                archivo << "Arma: " << agua->getArma() << endl;
            }
        }
        else
        {
            nada = dynamic_cast<nonBender *>(personas[i]);
            archivo << "Trabajo: " << nada->getTrabajo() << endl;
            archivo << "Fuerza: " << nada->getFuerza() << endl;
            archivo << "Velocidad: " << nada->getVelocidad() << endl;
        }

        archivo << "---------------------------------------------" << endl;
    }

    archivo.close();
}