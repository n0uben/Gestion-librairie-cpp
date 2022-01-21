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
    Dictionnaires monDictionnaire("Dictionnaire Francais/Anglais", 2, "Anglais");

    //tests masquage fonction (héritage)
    monDocument.afficher();

    monDictionnaire.afficher();

}