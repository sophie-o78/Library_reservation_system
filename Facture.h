/**
 * Project Untitled
 */


#ifndef _FACTURE_H
#define _FACTURE_H

#include "Commande.h"
#include "Produit.h"


class Facture {
public: 
    boolean EstReglee;
    Commande commande;
    vector<Produit> produits;
    
void Regler();
};

#endif //_FACTURE_H