#include <string>
#include <iostream>

#include "Dictionnaires.h"

using namespace std;

//Constructeur
Dictionnaires::Dictionnaires(string titre, int numen, string langue): Documents(titre, numen), langue(langue), fraisParticulier(10)
{

}

//Getters
std::string Dictionnaires::getLangue() const
{
    return this->langue;
}
double Dictionnaires::getFraisParticulier() const
{
    return this->fraisParticulier;
}

//Setters
void Dictionnaires::setLangue(std::string nouvelleLangue)
{
    this->langue = nouvelleLangue;
}
void Dictionnaires::setFraisParticulier(double nouveauxFraisParticulier)
{
    if (nouveauxFraisParticulier > 0)
    {
        this->fraisParticulier = nouveauxFraisParticulier;
    }
    else
    {
        this->fraisParticulier = 0;
    }
}

//Methodes
void Dictionnaires::afficher() const
{
    Documents::afficher();

    cout << "Langue : " << this->getLangue() << endl;
    cout << "Frais particulier : " << this->getFraisParticulier() << "€" << endl;
}

double Dictionnaires::fraisLivraison(int kilometres) const
{
    double totalFraisLivraison(0);

    totalFraisLivraison += Documents::fraisLivraison(kilometres) + this->getFraisParticulier();

    return totalFraisLivraison;
}