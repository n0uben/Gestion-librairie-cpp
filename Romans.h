#ifndef DEF_ROMANS_H
#define DEF_ROMANS_H

#include <string>
#include "Livres.h"

class Romans : public Livres
{
    public:
        //Constructeur
        Romans(std::string titre, int numen, std::string auteur, int prixLitteraire);

        //Getters
        std::string getAuteur() const;
        int getPrixLitteraire() const;

        //Setters
        void setAuteur(std::string NouvelAuteur);
        void setPrixLitteraire(int nouveauPrixLitteraire);

        //Methodes
        virtual void afficher() const;

    private:
        int prixLitteraire;
};

#endif