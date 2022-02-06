#include <string>
#include <iostream>

#include "Romans.h"

using namespace std;

//Constructeur
Romans::Romans(string titre, int numen, string auteur, int prixLitteraire): Livres(titre, numen), auteur(auteur), prixLitteraire(prixLitteraire)
{

}

//Getters
std::string Romans::getAuteur() const
{
    return this->nouvelAuteur;
}
int Romans::getPrixLitteraire() const
{
    return this->nouveauPrixLitteraire;
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
    
    cout << "Roman : " ;

    this->Documents::afficher();

    cout << ", auteur : " << this->getAuteur();
    
    cout << ", prix litteraire : " << this->getPrixLitteraire();
}