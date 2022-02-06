#ifndef DEF_MANUELS_H
#define DEF_MANUELS_H

#include <string>
#include "Documents.h"

class Manuels : public Livres
{
    public:
        //Constructeur
        Manuels(std::string titre, int numen, std::string auteur, int niveauScolaire);

        //Getters
        std::string getTitre() const;
        int getNumen() const;
        std::string getAuteur() const;
        int getNiveauScolaire() const;

        //Setters
        void setTitre(std::string nouveauTitre);
        void setNumen(int nouveauNumen);
        void setAuteur(std::string NouvelAuteur);
        void setNiveauScolaire(int nouveauNiveauScolaire);

        //Methodes
        virtual void afficher() const;
        virtual double fraisLivraison(int kilometres) const;

    private:
        std::string auteur;
        int niveauScolaire;
};

#endif