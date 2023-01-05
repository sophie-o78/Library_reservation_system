/**
 * Project Untitled
 */


#ifndef _COMMANDE_H
#define _COMMANDE_H

#include "Facture.h"
#include "Produit.h"


class Commande {
public: 
    Facture facture;
    vector<Produit> produits;
    
void Regler();
    
/**
 * @param p
 */
void AjouterProduit(Produit p);
    
void Expédier();
    
void CreerFacture();
private: 
    boolean EstReglee;
};

#endif //_COMMANDE_H