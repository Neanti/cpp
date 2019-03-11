//
// Created by neati on 11/02/19.
//

#include <iostream>
#include "Liste.h"

Noeud *Liste::getPremier() const {
    return premier;
}

void Liste::setPremier(Noeud *premier) {
    Liste::premier = premier;
}

Liste::Liste(Noeud *premier){
    this->setPremier(premier);
}

Noeud *Liste::getLast() {
    Noeud* i = this->getPremier();
    while(i->getNext())
    {
        i = i->getNext();
    }
    return i;
}

void Liste::aff(){
    int i = 1;
    Noeud* ite = this->getPremier();
    Noeud it = *ite;
    while(it.getNext())
    {
        std::cout << "Noeud : " + std::to_string(i) + "\tValeur : " + std::to_string(it.getData()) + "\n";
        it = *(it.getNext());
        i++;
    }
    std::cout << "Noeud : " + std::to_string(i) + "\tValeur : " + std::to_string(it.getData()) + "\n";
}

void Liste::add_front(int d){
    Noeud* n = new Noeud(d);
    n->setNext(this->getPremier());
    this->setPremier(n);
}

void Liste::add_back(int d) {
    Noeud * n = new Noeud(d);
    n->setNext(nullptr);
    Noeud* it = this->getLast();
    it->setNext(n);
}

void Liste::del_back() {
    Noeud* it = this->getPremier();
    while(it->getNext()->getNext() != nullptr)
    {
        it = it->getNext();
    }
    delete (it->getNext());
    it->setNext(nullptr);
}

void Liste::del_front() {
    Noeud* i = this->getPremier();
    Noeud* s = i->getNext();
    this->setPremier(s);
    delete (i);
}

Liste::Liste() {}






