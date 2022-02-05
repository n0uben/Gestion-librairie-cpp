#include <string>
#include <iostream>

#include "Romans.h"

using namespace std;

//Constructeur
Romans::Romans(string titre, int numen, string auteur, int prixLitteraire): Documents(titre, numen) //, auteur, prixLitteraire
{

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
    
    cout << "Roman : " ;

    this->Documents::afficher();

    cout << ", auteur : " << this->getAuteur();
    
    cout << ", prix litteraire : " << this->getPrixLitteraire();
}
double Romans::fraisLivraison(int kilometres) const
{
    double totalFraisLivraison(0);

    totalFraisLivraison = this->getFrais() + this->calculFraisTransport(kilometres);

    return totalFraisLivraison;

}