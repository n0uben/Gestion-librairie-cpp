#include <iostream>
#include <string>

#include "Documents.h"

using namespace std;

// CONSTRUCTEUR
Documents::Documents(): titre("Ce document n'a pas de titre")
{

}

Documents::Documents(std::string titre ): titre(titre)
{

}

//DESTRUCTEUR

// GETTERS
string Documents::getTitre() const
{
    return titre;
}

//SETTERS

// YA R POUR LINSTANT

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