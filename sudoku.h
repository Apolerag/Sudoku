#ifndef SUDOKU_H
#define SUDOKU_H

#include<base.h>
#include<graphe.h>

class sudoku
{
public:
    sudoku();
    sudoku(const int, const int);
    ~sudoku();

private:
    int colonne, ligne;
    Graphe grille;
};

#endif // SUDOKU_H
