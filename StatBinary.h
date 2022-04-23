#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
class StatBinary{
public:
    string mot;
    string fichier;
    bool existance;
};
/*class StatOccurence:public Stat{
    int occurence;
};
class StatBinary:public Stat{
};*/
//à remplacer avec une classe mere stat avec un type de retour template <class T>


#endif // DATA_H_INCLUDED
