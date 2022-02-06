#ifndef DEF_MANUELS_H
#define DEF_MANUELS_H

#include <string>
#include "Livres.h"

class Manuels : public Livres
{
    public:
        //Constructeur
        Manuels(std::string titre, int numen, std::string auteur, int niveauScolaire);

        //Getters
        std::string getAuteur() const;
        int getNiveauScolaire() const;

        //Setters
        void setAuteur(std::string nouvelAuteur);
        void setNiveauScolaire(int nouveauNiveauScolaire);

        //Methodes
        virtual void afficher() const;

    private:
        std::string auteur;
        int niveauScolaire;
};

#endif