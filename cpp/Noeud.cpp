//
// Created by neati on 11/02/19.
//

#include "Noeud.h"
#include "Liste.h"

int Noeud::getData() const {
    return data;
}

void Noeud::setData(int data) {
    Noeud::data = data;
}

Noeud *Noeud::getNext() const {
    return next;
}

void Noeud::setNext(Noeud *next) {
    Noeud::next = next;
}

Noeud::Noeud(int data){
    this->setNext(nullptr);
    this->setData(data);
}

