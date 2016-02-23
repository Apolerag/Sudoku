#include <QCoreApplication>

#include <sudoku.h>

int main(/*int argc, char *argv[]*/)
{
    Sudoku s(9,9);
    std::cout << "Bla Bla Bla" << std::endl;

    int t = s(0,3);
    std::cout<< t <<std::endl;


    boost::logic::tribool tri(true), test("unknown");

    return 0;
}
