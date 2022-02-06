#include <string>
#include <iostream>

#include "Livres.h"

using namespace std;

//Constructeur
Livres::Livres(string titre, int numen, string auteur): Documents(titre, numen), auteur(auteur)
{

}

//Getters
std::string Livres::getAuteur() const
{
return this->auteur;
}

//Setters
void Livres::setAuteur(string nouvelAuteur)
{
    this->auteur = nouvelAuteur;
}

//Methodes
void Livres::afficher() const
{
    this->Documents::afficher();

    cout << ", Auteur:" << this->getAuteur();
}