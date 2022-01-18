#ifndef DEF_DICTIONNAIRES
#define DEF_DICTIONNAIRES

#include <string>
#include "Documents.h"

class Dictionnaires : public Documents
{
    public:
        //Constructeur
        Dictionnaires(std::string titre, std::string langue);

        //Getters
        std::string getLangue() const;
        int getFraisParticulier() const;

        //Setters
        void setLangue(std::string nouvelleLangue);
        void setFraisParticulier(int nouveauxFraisParticulier);

    protected:
        std::string langue;
        int fraisParticulier;
};

#endif