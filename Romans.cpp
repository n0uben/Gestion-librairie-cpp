#include <string>
#include <iostream>

#include "Romans.h"

using namespace std;

//Constructeur
Romans::Romans(string titre, int numen, string auteur, int prixLitteraire): Livres(titre, numen, auteur), prixLitteraire(prixLitteraire)
{
    this->typeDoc = "Roman";
}

//Getters
std::string Romans::getAuteur() const
{
    return this->auteur;
}
int Romans::getPrixLitteraire() const
{
    return this->prixLitteraire;
}

//Setters
void Romans::setAuteur(std::string nouvelAuteur)
{
    this->auteur = nouvelAuteur;
}
void Romans::setPrixLitteraire(int nouveauPrixLitteraire)
{
    this->prixLitteraire = nouveauPrixLitteraire;
}

//Methodes
void Romans::afficher() const
{
    cout << this->getTypeDoc() << " : "; 

    this->Livres::afficher();

    cout << ", nbPrix : " << this->getPrixLitteraire();
}