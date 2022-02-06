#include <string>
#include <iostream>

#include "Manuels.h"

using namespace std;

//Constructeur
Manuels::Manuels(string titre, int numen, string auteur, int niveauScolaire): Livres(titre, numen), auteur(auteur), niveauScolaire(niveauScolaire)
{

}

//Getters
std::string Manuels::getAuteur() const
{
    return this->auteur;
}
int Manuels::getNiveauScolaire() const
{
    return this->niveauScolaire;
}

//Setters
void Manuels::setAuteur(std::string nouvelAuteur)
{
    this->auteur = nouvelAuteur;
}
void Manuels::setNiveauScolaire(int nouveauNiveauScolaire)
{
    this->niveauScolaire = nouveauNiveauScolaire;
}

//Methodes
void Manuels::afficher() const
{
    
    cout << "Manuel : " ;

    this->Documents::afficher();

    cout << ", auteur : " << this->getAuteur();
    
    cout << ", niveau scolaire : " << this->getNiveauScolaire();
}