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
    Documents monDocument("Le rouge et le noir");
    Dictionnaires monDictionnaire("Dictionnaire Francais/Anglais", "Anglais");

    double frais = monDocument.calculFraisTransport(10);
    cout << "Frais fixes : " << frais << "€" << endl;

    double fraisParticulier = monDictionnaire.getFraisParticulier();
    cout << "fraisParticuliers : " << fraisParticulier << "€" << endl;

    string titre = monDocument.getTitre();
    cout << "Le titre du document est : " << titre << endl;

    string titreDico = monDictionnaire.getTitre();
    cout << "Le titre du dico est : " << titreDico << endl;

}