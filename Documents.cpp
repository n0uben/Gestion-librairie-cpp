#include <iostream>
#include <string>

#include "Documents.h"

using namespace std;

// CONSTRUCTEUR
Documents::Documents(): titre("Ce document n'a pas de titre"), frais(0)
{

}

Documents::Documents(std::string titre ): titre(titre), frais(0)
{

}

//DESTRUCTEUR
Documents::~Documents(){/*ya R*/}

// GETTERS
string Documents::getTitre() const
{
    return this->titre;
}
int Documents::getFrais() const
{
    return this->frais;
}

//SETTERS
void Documents::setTitre(string titre)
{
    this->titre = titre;
}

void Documents::setFrais(int frais)
{
    if (frais > 0)
    {
        this->frais = frais;
    }
    else {
        this->frais = 0;
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