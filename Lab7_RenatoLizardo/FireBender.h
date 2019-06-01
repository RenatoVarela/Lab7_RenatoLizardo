#include "Benders.h"
#ifndef FIREBENDER_H
#define FIREBENDER_H

#include <string>

using std::string;

class FireBender : public Benders
{

private:
    int victorias = 0, cicatrices = 0;

public:
    FireBender();
    FireBender(PoderEspecial *, string, string, string, int, int, int);

    int getVictorias();
    int getCicatrices();

    void toString();
};

#endif