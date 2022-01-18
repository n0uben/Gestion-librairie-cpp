#include <iostream>
#include <string>

#include "Documents.h"

using namespace std;

// CONSTRUCTEUR
Documents::Documents(): titre("Ce document n'a pas de titre"), fraisFixes(0)
{

}

Documents::Documents(std::string titre ): titre(titre), fraisFixes(0)
{

}

//DESTRUCTEUR

// GETTERS
string Documents::getTitre() const
{
    return this->titre;
}
int Documents::getFrais() const
{
    return this->fraisFixes;
}

//SETTERS
void Documents::setTitre(string nouveauTitre)
{
    this->titre = nouveauTitre;
}

void Documents::setFraisFixes(int nouveauxFraisFixes)
{
    if (nouveauxFraisFixes > 0)
    {
        this->fraisFixes = nouveauxFraisFixes;
    }
    else {
        this->fraisFixes = 0;
    }
}

// METHODES
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