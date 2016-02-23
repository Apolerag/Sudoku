#ifndef GRAPHE_H
#define GRAPHE_H

#include<base.h>
#include<case.h>

class Graphe
{
public:
    Graphe();
    Graphe(const size_t l, const size_t c);
    ~Graphe();

    size_t& operator() (size_t row, size_t col);
    size_t  operator() (size_t row, size_t col) const;

private:
    QVector<size_t> _grille;
    size_t _ligne, _colonne;
};

#endif // GRAPHE_H
