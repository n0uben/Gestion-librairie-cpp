#ifndef DOCUMENTS_H
#define DOCUMENTS_H

#include <string>

class Documents
{
    public:
        // Constructeur
        Documents();
        Documents(std::string titre );

        std::string getTitre() const;
        double calculFraisTransport(int kilometres) const;

    private:
        std::string titre;
        int frais;
};

#endif