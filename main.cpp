#include <iostream>
#include <string>

#include "Dictionnaires.h"
#include "Documents.h"
#include "Livres.h"
#include "Manuels.h"
#include "Romans.h"
#include "StockDocuments.h"

using namespace std;


int main(void)
{

    Documents monDocument("Le rouge et le noir", 1);
    Documents monDocument2("Madame Bovary", 2);
    Dictionnaires monDictionnaire("Dictionnaire Francais/Anglais", 3, "Anglais");

    StockDocuments monStock;
    // monStock.ajouterDansCollection(monDocument);
    // monStock.ajouterDansCollection(monDictionnaire);
    monStock.ajouterDansCollection(&monDocument);
    monStock.ajouterDansCollection(&monDocument2);
    monStock.ajouterDansCollection(&monDictionnaire);

    monStock.afficherStock();
    monStock.afficherFraisLivraison(54.548414164);
}