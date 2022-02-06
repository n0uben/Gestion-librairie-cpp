#include <iostream>
#include <string>

#include "Dictionnaires.h"
#include "Documents.h"
#include "Livres.h"
#include "Manuels.h"
#include "Romans.h"
#include "StockDocuments.h"

using namespace std;

void fonctionAjouterDansCollection(StockDocuments* monStock, Documents* nouveauDocument)
{
    monStock->ajouterDansCollection(nouveauDocument);
}

int main(void)
{

    StockDocuments *monStock = new StockDocuments();


    fonctionAjouterDansCollection(
        monStock,
        new Manuels("Dissertation et methodes", 234, "Rochefort et Dalie", 2)
    );

    fonctionAjouterDansCollection(
        monStock,
        new Dictionnaires("Larousse anglais", 456, "anglais")
    );

    fonctionAjouterDansCollection(
        monStock,
        new Romans("Les contemplations", 765, "Victor Hugo", 8)
    );


    monStock->afficherStock();
    monStock->afficherFraisLivraison(20);

    delete monStock; 
}