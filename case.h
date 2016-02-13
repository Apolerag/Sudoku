#ifndef CASE_H
#define CASE_H

#include<base.h>

class Case
{
public:
    Case();
    ~Case();

    Error addVoisin(Case& c);
    Error changeEtat(Etat& newEtat);

    void write();

    //Getter/Setter
    std::vector<Case> voisins() const;
    void setVoisins(const std::vector<Case>& voisins);

    unsigned int value() const;
    void setValue(unsigned int value);

    std::set<unsigned int> possibleValue() const;
    void setPossibleValue(const std::set<unsigned int>& possibleValue);
    void addPossibleValue(const unsigned int val);
    void removePossibleValue(const unsigned int val);

    unsigned int nbPossible() const;
    void setNbPossible(unsigned int nbPossible);

    Etat etat() const;
    void setEtat(const Etat &etat);

private:
    std::vector<Case> _voisins;
    unsigned int _value;
    std::set<unsigned int> _possibleValue;
    unsigned int _nbPossible;
    Etat _etat;
};

#endif // CASE_H
