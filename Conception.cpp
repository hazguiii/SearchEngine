#include <iostream>
 #include <vector>
 using namespace std;
class lecteur{
    virtual vector<string> lire(string) = 0;
};
class traiteur{
    virtual vector<string> traiter(vector<string>) = 0; //joue le role d'un nettoyeur
};
class analyseur{
    virtual vector<string> analyser(vector<string>) = 0;
};
class indexe{
    virtual void indexer(vector<string>) = 0;
};
class ordonnanceur{
    virtual void ordonnancer() = 0;
};
class rechercheur{
    virtual void rechercher(string) = 0;
};


