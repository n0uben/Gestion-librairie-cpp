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
        std::string getTypeDoc() const;
        std::string getTitre() const;
        int getNumen() const;
        double getFrais() const;

        //Setters
        void setTitre(std::string nouveauTitre);
        void setNumen(int nouveauNumen);
        void setFraisFixes(double nouveauxFraisFixes);

        //Méthodes
        virtual void afficher() const;
        double calculFraisTransport(int kilometres) const;
        virtual double fraisLivraison(int kilometres) const;

    //le status protected permet aux classe filles
    // d’accéder aux attributs parents
    protected:
        std::string typeDoc;
        std::string titre;
        int numen;
        double fraisFixes;
};

#endif