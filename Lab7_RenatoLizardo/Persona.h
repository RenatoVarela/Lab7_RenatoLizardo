
#ifndef PERSONA_H
#define PERSONA_H


#include <string>

using std::string;



class Persona{

    protected:

    string nacion;
    string nombre;
    string sexo;
    int edad;

	


	

    
    



    public:

    Persona();

    Persona(string , string ,string , int);
    string getNacion();
    string getNombre();
    string getSexo();
    int getEdad();
    virtual void toString();


    //Se necesita saber la nación de origen, el nombre,
    // la edad y el sexo de cada persona. También se necesita saber qué tipo de elemento domina esa persona para poder tener el 
    //registro bien ordenado por elementos.



};




#endif