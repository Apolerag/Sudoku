#ifndef GRAPHE_H
#define GRAPHE_H

#include<base.h>
#include<case.h>

class Graphe
{
public:
    Graphe();
    Graphe(const int size);
    Graphe(const int l, const int c);
    ~Graphe();

private:
    std::vector<Case> Grille;
};

#endif // GRAPHE_H
