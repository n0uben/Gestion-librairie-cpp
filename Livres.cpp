#include <string>
#include <iostream>

#include "Livres.h"

using namespace std;

//Constructeur
Livres::Livres(string titre, int numen, string auteur): Documents(titre, numen)
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
void Livres::afficher() const
{
    
    cout << "Livre : " ;

    this->Documents::afficher();

    cout << ", Auteur : " << this->getAuteur();
}

double Livres::fraisLivraison(int kilometres) const
{
    double totalFraisLivraison(0);

    totalFraisLivraison = this->getFrais() + this->calculFraisTransport(kilometres);

    return totalFraisLivraison;

}