#include <iostream>
#include <string>
#include <vector>

#include "StockDocuments.h"
#include "Documents.h"
#include "Dictionnaires.h"

using namespace std;

StockDocuments::StockDocuments() {}

void StockDocuments::ajouterDansCollection(Documents* nouveauDocument)
{
    this->maCollection.push_back(nouveauDocument);
    cout << nouveauDocument->getTitre() << " a bien été rajouté !" << endl;
}

void StockDocuments::afficherStock() const
{
    cout << "---------------------------------------------------------------------------------" << endl;
    for (int i(0); i < maCollection.size(); i++)
    {
        maCollection[i]->afficher();
        cout << endl;
    }
    cout << "---------------------------------------------------------------------------------" << endl;
}

double StockDocuments::fraisLivraison(int kilometres) const
{
    double totalFraisLivraisonStock(0);

    for (int i(0); i < maCollection.size(); i++)
    {
        totalFraisLivraisonStock += maCollection[i]->fraisLivraison(kilometres);
    }
    return totalFraisLivraisonStock;
}

void StockDocuments::afficherFraisLivraison(int kilometres) const
{
    if (kilometres > 0)
    {
        cout << "Frais Livraison pour une distance de " << kilometres << "km est : " << this->fraisLivraison(kilometres) << " Euros" << endl;
    }
    else {
        cout << "Veuillez saisir un nombre de kilometres positif pour obtenir les frais de Livraison" << endl;
    }

    }
