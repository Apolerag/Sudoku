#include "graphe.h"
#include <assert.h>

Graphe::Graphe()
{

}

Graphe::Graphe(const size_t l, const size_t c): _ligne(l), _colonne(c)
{
    assert(_ligne == _colonne);
    _grille.resize(_ligne * _colonne);
}

Graphe::~Graphe()
{

}

size_t& Graphe::operator() (size_t row, size_t col)
{
    return _grille[row * _ligne + col];
}

size_t  Graphe::operator() (size_t row, size_t col) const
{
    return _grille[row * _ligne + col];
}
