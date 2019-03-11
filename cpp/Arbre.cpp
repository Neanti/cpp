//
// Created by neati on 11/02/19.
//

#include "Arbre.h"

Arbre::Arbre(Noeud2 *root) : root(root) {}

Noeud2 *Arbre::getRoot() const {
    return root;
}

void Arbre::setRoot(Noeud2 *root) {
    Arbre::root = root;
}
