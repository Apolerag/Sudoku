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


/*
 * Au lieu de dire grille 9 * 9 cases -> groupe de 3*3 cases
 *
 * dire 3*3 -> 3*3 groupes de 3*3 cases !
 *
 * /
