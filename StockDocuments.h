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
        void ajouterDansCollection();
        void afficher() const;
        double fraisLivraison() const;

    protected:
        std::vector<std::string> maCollection;
};

#endif