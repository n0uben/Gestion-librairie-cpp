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

    double frais = monDocument.calculFraisTransport(10);

    cout << frais << endl;

    string titre = monDocument.getTitre();

    cout << "Le titre du document est : " << titre << endl;

}