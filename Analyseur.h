#ifndef ANALYSEUR_H_INCLUDED
#define ANALYSEUR_H_INCLUDED
#include "StatBinary.h"
class Analyseur{
    virtual vector<StatBinary> analyser(vector<string> motsTraitees,string fichier) = 0;
};

#endif // ANALYSEUR_H_INCLUDED
