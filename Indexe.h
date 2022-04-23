#ifndef INDEXE_H_INCLUDED
#define INDEXE_H_INCLUDED

class Indexe{
public:
    virtual void addStats(string file) = 0; // à remplacer StatBinary avec template<class T> car les Statistiques varies
};


#endif // INDEXE_H_INCLUDED
