#ifndef DEF_STOCKDOCUMENTS
#define DEF_STOCKDOCUMENTS

#include <string>
#include <vector>

#include "Documents.h"

class StockDocuments
{
    public:
        //constructeur
        StockDocuments();

        //Methodes
        void ajouterDansCollection(Documents* nouveauDocument);
        void afficherStock() const;
        double fraisLivraison(int kilometres) const;

    private:
        std::vector<Documents*> maCollection;
};

#endif