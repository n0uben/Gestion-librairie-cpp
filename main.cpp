#include <iostream>
#include <string>

#include "Dictionnaires.h"
#include "Documents.h"
#include "Livres.h"
#include "Manuels.h"
#include "Romans.h"
#include "StockDocuments.h"

using namespace std;

void fonctionAjouterDansCollection(StockDocuments monStock, Documents* nouveauDocument)
{
    monStock.ajouterDansCollection(nouveauDocument);
}

int main(void)
{

    StockDocuments *monStock = new StockDocuments();
    // monStock.ajouterDansCollection(monDocument);
    // monStock.ajouterDansCollection(monDictionnaire);
    // monStock->ajouterDansCollection(new Romans("Harry Potter et l'ecole des sorciers","J.K.Rowling",1));
    monStock->ajouterDansCollection(new Documents("Le rouge et le noir", 1));
    monStock->ajouterDansCollection(new Documents("Madame Bovary", 2));
    monStock->ajouterDansCollection(new Dictionnaires("Dictionnaire Francais/Anglais", 3, "Anglais"));

    fonctionAjouterDansCollection(*monStock, new Dictionnaires("test", 4, "français"));

    monStock->afficherStock();
    monStock->afficherFraisLivraison(20);

    delete monStock;
}