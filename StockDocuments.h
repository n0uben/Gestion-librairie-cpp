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

    protected:
        std::vector<Documents*> maCollection;
};

#endif