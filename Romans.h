#ifndef DEF_ROMANS_H
#define DEF_ROMANS_H

#include <string>
#include "Documents.h"

class Romans : public Documents // voir si pas public Livres
{
    public:
        //Constructeur
        Romans(std::string titre, int numen, std::string auteur, int prixLitteraire);

        //Getters
        std::string getTitre() const;
        int getNumen() const;
        std::string getAuteur() const;
        int getPrixLitteraire() const;

        //Setters
        void setTitre(std::string nouveauTitre);
        void setNumen(int nouveauNumen);
        void setAuteur(std::string NouvelAuteur);
        void setPrixLitteraire(int nouveauPrixLitteraire);

        //Methodes
        virtual void afficher() const;
        virtual double fraisLivraison(int kilometres) const;

    private:
        std::string auteur;
        int prixLitteraire;
};

#endif