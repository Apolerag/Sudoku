#include "case.h"
#include <iterator>

Case::Case():  _voisins(20), _value(), _etat(false)
{

}

Case::~Case()
{

}

error Case::addVoisin(Case& c)
{
    _voisins.push_back(c);
    return noError;
}

error Case::changeEtat(bool &newEtat)
{
    if(this->etat() == newEtat)
        return Nochange;
    _etat = newEtat;
    return noError;
}

QVector<Case> Case::voisins() const
{
    return _voisins;
}

void Case::setVoisins(const QVector<Case>& voisins)
{
    _voisins = voisins;
}

unsigned Case::value() const
{
    return _value;
}

void Case::setValue(unsigned value)
{
    _value = value;
}

QSet<unsigned> Case::possibleValue() const
{
    return _possibleValue;
}

void Case::setPossibleValue(const QSet<unsigned> &possibleValue)
{
    _possibleValue = possibleValue;
}

void Case::addPossibleValue(const unsigned val)
{
    _possibleValue.insert(val);
}

void Case::removePossibleValue(const unsigned val)
{
    _possibleValue.remove(val);
}

unsigned int Case::nbPossible() const
{
    return _possibleValue.size();
}

bool Case::etat() const
{
    return _etat;
}

void Case::setEtat(const bool &etat)
{
    _etat = etat;
}
