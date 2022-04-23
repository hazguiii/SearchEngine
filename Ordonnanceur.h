#ifndef ORDONNANCEUR_H_INCLUDED
#define ORDONNANCEUR_H_INCLUDED
#include "StatBinary.h"
class Ordonnanceur{
public:
    virtual void ordonnancer(StatBinary donneesReq) = 0;
};

#endif // ORDONNANCEUR_H_INCLUDED
