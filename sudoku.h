#ifndef SUDOKU_H
#define SUDOKU_H

#include<base.h>
#include<graphe.h>

class Sudoku
{
public:
    Sudoku();
    Sudoku(const int, const int);
    ~Sudoku();

    size_t& operator() (size_t row, size_t col);
    size_t  operator() (size_t row, size_t col) const;

private:
    Graphe _grille;
    int _colonne;
    int _ligne;
};

#endif // SUDOKU_H
