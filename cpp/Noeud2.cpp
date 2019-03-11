//
// Created by neati on 11/02/19.
//

#include "Noeud2.h"

int Noeud2::getData() const {
    return data;
}

Noeud2::Noeud2(int data) : data(data) {}

void Noeud2::setData(int data) {
    Noeud2::data = data;
}

Noeud2 *Noeud2::getRight() const {
    return right;
}

void Noeud2::setRight(Noeud2 *right) {
    Noeud2::right = right;
}

Noeud2 *Noeud2::getLeft() const {
    return left;
}

void Noeud2::setLeft(Noeud2 *left) {
    Noeud2::left = left;
}
