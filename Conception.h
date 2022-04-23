class lecteur{
    virtual vector<string> lire(string path) = 0;
};
class traiteur{
    virtual vector<string> traiter(vector<string> mots) = 0; //joue le role d'un nettoyeur
};
class analyseur{
    virtual vector<Data> analyser(vector<string> motsTraitees) = 0;
};
class indexe{
    vector<Data> data;
    virtual void indexeur(string file,vector<Data> stat) = 0;
};
class ordonnanceur{
    virtual void ordonnancer(Data donneesReq) = 0;
};
class moteurRecherche{
    virtual vector<string> rechercher(string req) = 0;
    virtual void indexer(indexe Ind,vector<string> motsReq) = 0
};
