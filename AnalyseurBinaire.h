#ifndef ANALYSEURBINAIRE_H_INCLUDED
#define ANALYSEURBINAIRE_H_INCLUDED
#include "Analyseur.h"
#include "StatBinary.h"
#include <string.h>
class AnalyseurBinaire:public Analyseur{
public:
    vector<StatBinary> analyser(vector<string> motsTraitees,string fichier);
};

vector<StatBinary> AnalyseurBinaire::analyser(vector<string> motsTraitees,string fichier){
    vector<StatBinary> stats;
    for(string word:motsTraitees){
        if (stats.size() == 0){
            StatBinary stat;
            stat.mot = word;
            stat.fichier = fichier;
            stat.existance = true;
            stats.push_back(stat);
        }
        else{
            bool existance = false;
            for (unsigned i=0;i<stats.size();i++){
                if (stats[i].mot==word ){
                    existance = true;
                    break;
                }

            }
        if (existance == false){ //à remplacer par !existance
            StatBinary stat;
            stat.mot = word;
            stat.fichier = fichier;
            stat.existance = true;
            stats.push_back(stat);
        }
    }
}
return stats;
};
#endif // ANALYSEURBINAIRE_H_INCLUDED
