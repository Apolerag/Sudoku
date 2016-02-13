#include "case.h"
#include <iterator>

Case::Case()
{

}

Case::~Case()
{

}

Error Case::addVoisin(Case& c)
{
    _voisins.push_back(c);
    return noError;
}

Error Case::changeEtat(Etat& newEtat)
{
    if(this->etat() == newEtat)
        return Nochange;
    _etat = newEtat;
    return noError;
}

std::vector<Case> Case::voisins() const
{
    return _voisins;
}

void Case::setVoisins(const std::vector<Case>& voisins)
{
    _voisins = voisins;
}

unsigned int Case::value() const
{
    return _value;
}

void Case::setValue(unsigned int value)
{
    _value = value;
}

std::set<unsigned int> Case::possibleValue() const
{
    return _possibleValue;
}

void Case::setPossibleValue(const std::set<unsigned int>& possibleValue)
{
    _possibleValue = possibleValue;
    _nbPossible = _possibleValue.size();
}

void Case::addPossibleValue(const unsigned int val)
{
    //if(_possibleValue.find(val))
    _possibleValue.insert(val);
    _nbPossible++;
}

void Case::removePossibleValue(const unsigned int val)
{
    _possibleValue.erase(val);
}

unsigned int Case::nbPossible() const
{
    return _nbPossible;
}

void Case::setNbPossible(unsigned int nbPossible)
{
    _nbPossible = nbPossible;
}

Etat Case::etat() const
{
    return _etat;
}

void Case::setEtat(const Etat &etat)
{
    _etat = etat;
}
