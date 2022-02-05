#ifndef DEF_LIVRES_H
#define DEF_LIVRES_H

#include <string>
#include "Documents.h"

class Livres : public Documents
{
    public:
        //Constructeur
        Livres(std::string titre, int numen, std::string auteur);

        //Getters
        std::string getTitre() const;
        int getNumen() const;
        std::string getAuteur() const;

        //Setters
        void setTitre(std::string nouveauTitre);
        void setNumen(int nouveauNumen);
        void setAuteur(std::string NouvelAuteur);

        //Methodes
        virtual void afficher() const;
        virtual double fraisLivraison(int kilometres) const;

    private:
        std::string auteur;
};

#endif