#ifndef DOCUMENTS_H
#define DOCUMENTS_H

#include <string>

class Documents
{
    public:
        // Constructeur
        Documents(std::string titre, int numen);

        //Destructeur

        //Getters
        std::string getTitre() const;
        int getNumen() const;
        int getFrais() const;

        //Setters
        void setTitre(std::string nouveauTitre);
        void setNumen(int nouveauNumen);
        void setFraisFixes(int nouveauxFraisFixes);

        //Méthodes
        void afficher() const;
        double calculFraisTransport(int kilometres) const;
        double fraisLivraison(int kilometres) const;

    //le status protected permet aux classe filles
    // d’accéder aux attributs parents
    protected:
        std::string titre;
        int numen;
        int fraisFixes;
};

#endif