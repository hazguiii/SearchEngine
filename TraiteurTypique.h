#ifndef TRAITEURTYPIQUE_H_INCLUDED
#define TRAITEURTYPIQUE_H_INCLUDED
#include "Traiteur.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
#include "LecteurFichier.h"
using namespace std;

class TraiteurTypique:public Traiteur{
    public:
        vector<string> traiter (vector<string> mots);
        vector<string> setLowerCase (vector<string> mots);
        vector<string> removePunctuations (vector<string> mots);
        vector<string> removeEmptyWords (vector<string> mots);
};
vector<string> TraiteurTypique::traiter(vector<string> mots){
    mots = setLowerCase(mots);
    mots = removePunctuations(mots);
    mots = removeEmptyWords(mots);
    return mots;
};
vector<string> TraiteurTypique::setLowerCase(vector<string> mots){
    for(unsigned i=0;i<mots.size();i++){
        transform(mots[i].begin(),mots[i].end(),mots[i].begin(),::tolower);
    };
    return mots;
};
vector<string> TraiteurTypique::removeEmptyWords(vector<string> mots){
    LecteurFichier lecteurEmptyWords;
    vector<string> emptyWords = lecteurEmptyWords.lire("EmptyWords.txt");
    /*for (string word : emptyWords){
        emptyWords.push_back(word+" ");
    }*/ //we put this back in case we wanted to study the case of two words separated by a punctuation ex: ahmed.hazgui
    unsigned i = 0;
    while(i<mots.size()){
        if (find(emptyWords.begin(),emptyWords.end(),mots[i]) != emptyWords.end()){
            mots.erase(mots.begin()+i);
        }
        else{
        i++;
        }
    }
    return mots;
}
vector<string> TraiteurTypique::removePunctuations(vector<string> mots){
    LecteurFichier lec;
    vector<string> punctuations = lec.lire("Punctuations.txt");
    for(unsigned i=0;i<mots.size();i++){
        for (string punctuation : punctuations){
            if (mots[i].find(punctuation)<mots[i].size()){
                mots[i].replace(mots[i].find(punctuation),mots[i].find(punctuation)+1,"");
                }
            }
    }

    return mots;
}
#endif // TRAITEURTYPIQUE_H_INCLUDED
