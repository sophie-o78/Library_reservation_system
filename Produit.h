/**
 * Project Untitled
 */


#ifndef _PRODUIT_H
#define _PRODUIT_H

#include "Facture.h"


class Produit {
public: 
    string Code;
    string Libelle;
    float Prix;
    Facture liste;
};

#endif //_PRODUIT_H