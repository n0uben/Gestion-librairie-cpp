#include <iostream>
#include <string>
#include <vector>

#include "StockDocuments.h"

using namespace std;

StockDocuments::StockDocuments()
{
    this->maCollection.push_back("test");
    this->maCollection.push_back("test2");
}
void StockDocuments::afficher() const
{
    for (int i(0); i < maCollection.size(); i++)
    {
        cout << maCollection[i] << endl;
    }
}