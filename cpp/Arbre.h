//
// Created by neati on 11/02/19.
//

#ifndef CPP_ARBRE_H
#define CPP_ARBRE_H


#include "Noeud2.h"

class Arbre {
private:
    Noeud2* root;
public:
    Arbre(Noeud2 *root);

    Noeud2 *getRoot() const;

    void setRoot(Noeud2 *root);
};


#endif //CPP_ARBRE_H
