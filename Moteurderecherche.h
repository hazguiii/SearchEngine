#ifndef MOTEURDERECHERCHE_H_INCLUDED
#define MOTEURDERECHERCHE_H_INCLUDED
#include "Indexe.h"
#include "LecteurString.h"
#include "TraiteurTypique.h"
#include "StatBinary.h"
#include "OrdonnanceurBinaire.h"
class MoteurRecherche{
public:
    void rechercher(IndexeVector ind, string req);
    void indexer(IndexeVector ind , vector<string> wordsReq);
};

void MoteurRecherche::rechercher(IndexeVector ind,string req){
    LecteurString LectStr;
    vector<string> wordsReq = LectStr.lire(req);
    indexer(ind,wordsReq);
}
void MoteurRecherche::indexer(IndexeVector ind, vector<string> wordsReq){
    for (string word:wordsReq){
        cout << "Les fichiers contenant le mot " << word <<" sont :"<<endl;
        for (unsigned i=0;i<ind.Data.size();i++){
            if (ind.Data[i].mot == word){
                cout << ind.Data[i].mot<<endl;
                cout << word<<endl;
                cout << ind.Data[i].fichier<< endl;
            }
        }
    }
}


#endif // MOTEURDERECHERCHE_H_INCLUDED
