#ifndef CASE_H
#define CASE_H

#include<base.h>

class Case
{
public:
    Case();
    ~Case();

    error addVoisin(Case& c);
    error changeEtat(bool& newEtat);

    void write();

    //Getter/Setter
    QVector<Case> voisins() const;
    void setVoisins(const QVector<Case>& voisins);

    unsigned value() const;
    void setValue(unsigned value);

    QSet<unsigned> possibleValue() const;
    void setPossibleValue(const QSet<unsigned>& possibleValue);
    void addPossibleValue(const unsigned val);
    void removePossibleValue(const unsigned val);

    unsigned int nbPossible() const;

    bool etat() const;
    void setEtat(const bool &etat);

private:
    QVector<Case> _voisins;
    unsigned int _value;
    QSet<unsigned> _possibleValue;
    QSet<unsigned> _testedValue;
    bool _etat;
};

#endif // CASE_H
