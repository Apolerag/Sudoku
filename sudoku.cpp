#include "sudoku.h"

sudoku::sudoku()
{

}

sudoku::sudoku(const int l, const int c): ligne(l*l), colonne(c*c), grille(l,c)
{

}

sudoku::~sudoku()
{

}

