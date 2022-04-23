#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <algorithm>
#include "LecteurFichier.h"
#include "TraiteurTypique.h"
#include "AnalyseurBinaire.h"
#include "IndexeVector.h"
#include "LecteurString.h"
#include "Moteurderecherche.h"
using namespace std;
int main(){



    IndexeVector Index;
    Index.addStats("0.txt");
    for (int i=100;i<188;i++){
        Index.addStats(to_string(i).append(".txt"));
    }
    while (true){

        int choix;
        cout << "1. Indexer un fichier."<<endl << "2. Afficher l'index."<<endl<<"3. Rechercher"<<endl;
        cout << "--> Donner un choix: ";
        cin >> choix;
        switch(choix){
            case (1):
            {
                string nomFichier;
                cout << "Donner le nom du fichier à indexer: ";
                cin >> nomFichier;
                Index.addStats(nomFichier);
                break;
            }
            case(2):
            {
                for (StatBinary stat:Index.Data){
                    cout << stat.mot<<endl<<stat.fichier<<endl<<"________________"<<endl;
                }
                break;
            }
            case(3):
            {
                string req;
                cout << "Donner une requéte: ";
                cin >> req;
                MoteurRecherche moteur;
                moteur.rechercher(Index,req);
                break;
            }
        }

    }



}


;
