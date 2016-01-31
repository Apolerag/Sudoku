#ifndef CASE_H
#define CASE_H

#include<base.h>

class Case
{
public:
    Case();
    ~Case();
private:
    std::vector<Case> voisins;
    int value;
    std::set<int> possible_value;
};

#endif // CASE_H
