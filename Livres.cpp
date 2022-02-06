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
void Livres::setAuteur(std::string nouvelAuteur)
{
    this->auteur = nouvelAuteur;
}

//Methodes
// Récupère celles de Documents.h et Documents.cpp