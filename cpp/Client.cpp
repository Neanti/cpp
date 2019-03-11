//
// Created by neati on 04/02/19.
//

#include "Client.h"
#include <string>

int Client::getA() const {
    return a;
}

void Client::setA(int a) {
    Client::a = a;
}

int Client::getB() const {
    return b;
}

void Client::setB(int b) {
    Client::b = b;
}

Client::Client(int a, int b) : a(a), b(b) {}

int Client::somme(int i) {
    int c = this->getB() + this->getB() + i;
    return c;
}

const std::string &Client::getNom() const {
    return nom;
}

void Client::setNom(const std::string &nom) {
    Client::nom = nom;
}
