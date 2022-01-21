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
    for (int i(0); i < maCollection.size(); i++)
    {
        maCollection[i]->afficher();
        cout << endl;
    }
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
