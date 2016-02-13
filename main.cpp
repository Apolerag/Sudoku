#include <QCoreApplication>
#include <iostream>
#include <set>
#include <iterator>

#include <sudoku.h>

int main(int argc, char *argv[])
{
    //sudoku s(3,3);
    //std::cout<<"Bla Bla Bla"<<std::endl;

    std::set<int> myset;
    std::set<int>::iterator it;

    for (int i=1; i<=5; i++) myset.insert(i*10);    // set: 10 20 30 40 50

     it=myset.find(20);
     if(*it)
         int debug = 6;
     myset.erase (it);
     myset.erase (myset.find(40));

     std::cout << "myset contains:";
     for (it=myset.begin(); it!=myset.end(); ++it)
       std::cout << ' ' << *it;
     std::cout << '\n';

    return 0;
}
