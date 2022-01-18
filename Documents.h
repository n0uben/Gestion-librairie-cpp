#ifndef DOCUMENTS_H
#define DOCUMENTS_H

#include <string>

class Documents
{
    public:
        // Constructeurs
        Documents();
        Documents(std::string titre);

        //Destructeur

        //Getters
        std::string getTitre() const;
        int getFrais() const;

        //Setters
        void setTitre(std::string titre);
        void setFraisFixes(int nouveauxFraisFixes);

        //Méthodes
        double calculFraisTransport(int kilometres) const;

    //le status protected permet aux classe filles
    // d’accéder aux attributs parents
    protected:
        std::string titre;
        int fraisFixes;
};

#endif