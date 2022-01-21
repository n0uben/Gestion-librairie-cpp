#ifndef DEF_DICTIONNAIRES
#define DEF_DICTIONNAIRES

#include <string>
#include "Documents.h"

class Dictionnaires : public Documents
{
    public:
        //Constructeur
        Dictionnaires(std::string titre, int numen, std::string langue);

        //Getters
        std::string getLangue() const;
        double getFraisParticulier() const;

        //Setters
        void setLangue(std::string nouvelleLangue);
        void setFraisParticulier(double nouveauxFraisParticulier);        

        //Methodes
        void afficher() const;
        double fraisLivraison(int kilometres) const;

    private:
        std::string langue;
        double fraisParticulier;
};

#endif