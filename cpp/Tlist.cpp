//
// Created by neati on 11/02/19.
//

#include <string>
#include <iostream>
#include "Tlist.h"

template<class T>
Tlist<T>::Tlist(Tnoeud<T> *pre){
    this->premier = pre;
}

template<class T>
Tnoeud<T> *Tlist<T>::getPremier() const {
    return premier;
}


template<class T>
void Tlist<T>::setPremier(Tnoeud<T> *premier) {
    Tlist::premier = premier;
}

template<class T>
void Tlist<T>::add_front(T d) {
    Tnoeud<T> *n = new Tnoeud<T>(d);
    n->setNext(this->getPremier());
    this->setPremier(n);
}

template<class T>
Tnoeud<T> *Tlist<T>::getLast() {
    Tnoeud<T> *n = this->getPremier();
    while(n->getNext())
    {
        n = n->getNext();
    }
    return n;
}

template <>
void Tlist<char*>::aff() {
    int i = 1;
    Tnoeud<char*>* ite = this->getPremier();
    Tnoeud<char*> it = *ite;
    while(it.getNext())
    {
        std::cout << "Noeud : " + std::to_string(i) + "\tValeur : " + (it.getData()) + "\n";
        i++;
        it = *(it.getNext());
    }
    std::cout << "Noeud : " + std::to_string(i) + "\tValeur : " + (it.getData()) + "\n";
}

template<class T>
void Tlist<T>::add_back(Tnoeud<T>* n) {
    Tnoeud<T>* ite = this->getPremier();
    if(ite == NULL)
    {
        this->setPremier(NULL);
    }
    Tnoeud<T> it = *ite;
    while(it.getNext())
    {
        it = *(it.getNext());
    }
    it.setNext(n);
}

template<class T>
void Tlist<T>::aff() {
    int i = 1;
    Tnoeud<T>* ite = this->getPremier();
    Tnoeud<T> it = *ite;
    while(it.getNext())
    {
        std::cout << "Noeud : " + std::to_string(i) + "\tValeur : " + std::to_string(it.getData()) + "\n";
        i++;
        it = *(it.getNext());
    }
    std::cout << "Noeud : " + std::to_string(i) + "\tValeur : " + std::to_string(it.getData()) + "\n";
}


template class Tlist<int>;
template class Tlist<char*>;

