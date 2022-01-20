#ifndef DEF_STOCKDOCUMENTS
#define DEF_STOCKDOCUMENTS

#include <vector>

#include "Documents.h"

class StockDocuments
{
    public:
        //constructeur
        StockDocuments();

        //Methodes
        void ajouterDansCollection();

        double fraisLivraison();

    protected:
        std::vector<Documents> maCollection;
};

#endif