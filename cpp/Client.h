//
// Created by neati on 04/02/19.
//

#ifndef CPP_CLIENT_H
#define CPP_CLIENT_H

#include <string>

class Client {
public:
    int a;
    int b;
    std::string nom;

    const std::string &getNom() const;

    void setNom(const std::string &nom);

public:
    Client(int a, int b);

    int getA() const;

    void setA(int a);

    int getB() const;

    void setB(int b);

    int somme(int i);

};


#endif //CPP_CLIENT_H
