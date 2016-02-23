#include "sudoku.h"

Sudoku::Sudoku()
{

}

Sudoku::Sudoku(const int l, const int c): _grille(l,c), _colonne(c),_ligne(l)
{

}

Sudoku::~Sudoku()
{

}

size_t& Sudoku::operator() (size_t row, size_t col)
{
    return _grille(row, col);
}

size_t  Sudoku::operator() (size_t row, size_t col) const
{
    return _grille(row, col);
}
