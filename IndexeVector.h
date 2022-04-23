#ifndef INDEXEVECTOR_H_INCLUDED
#define INDEXEVECTOR_H_INCLUDED
#include "Indexe.h"
#include "LecteurFichier.h"
#include "TraiteurTypique.h"
#include "AnalyseurBinaire.h"
#include "StatBinary.h"
class IndexeVector:public Indexe{
public:
    vector<StatBinary> Data;
    void addStats(string nomFichier);
};

void IndexeVector::addStats(string nomFichier){
    LecteurFichier Lect;
    TraiteurTypique Trait;
    AnalyseurBinaire Analy;

    vector<string> mots = Lect.lire(nomFichier); //vecteur contenant toutes les mots du fichier texte
    mots = Trait.traiter(mots); //vecteur contenant les mots du fichier texte traitées
    vector<StatBinary> stats = Analy.analyser(mots,nomFichier);
    for (StatBinary stat : stats){
        Data.push_back(stat);
}
}
#endif // INDEXEVECTOR_H_INCLUDED
