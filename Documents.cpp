#include <iostream>
#include <string>

#include "Documents.h"

using namespace std;

// CONSTRUCTEUR

Documents::Documents(std::string titre, int numen): titre(titre), numen(numen), fraisFixes(2) {}

//DESTRUCTEUR

// GETTERS
string Documents::getTitre() const
{
    return this->titre;
}
int Documents::getNumen() const
{
    return this->numen;
}
double Documents::getFrais() const
{
    return this->fraisFixes;
}

//SETTERS
void Documents::setTitre(string nouveauTitre)
{
    this->titre = nouveauTitre;
}
void Documents::setNumen(int nouveauNumen)
{
    this->numen = nouveauNumen;
}

void Documents::setFraisFixes(double nouveauxFraisFixes)
{
    if (nouveauxFraisFixes > 0)
    {
        this->fraisFixes = nouveauxFraisFixes;
    }
    else 
    {
        this->fraisFixes = 0;
    }
}

// METHODES
void Documents::afficher() const
{
    cout << "Titre : " << this->getTitre() << ", ";
    cout << "Numen : " << this->getNumen();
}

double Documents::calculFraisTransport(int kilometres) const
{

    //frais de transport initialisés à 0€
    double fraisTransport(0.);
    
    //1km coute 0,05€
    double coutKilometre(0.05);

    if (kilometres > 0)
    {
        fraisTransport = kilometres * coutKilometre;
    }
    
    return fraisTransport;
}

double Documents::fraisLivraison(int kilometres) const
{
    double totalFraisLivraison(0);

    totalFraisLivraison = this->getFrais() + this->calculFraisTransport(kilometres);

    return totalFraisLivraison;

}