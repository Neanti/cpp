//
// Created by neati on 11/02/19.
//

#ifndef CPP_LISTE_H
#define CPP_LISTE_H


#include "Noeud.h"

class Liste {
public:
    Liste(Noeud *premier);

    Liste();

    Noeud *getPremier() const;

    void setPremier(Noeud *premier);

    Noeud* getLast();

    void aff();

    void add_front(int d);

    void add_back(int d);

    void del_front();

    void del_back();

private:
    Noeud* premier;
};


#endif //CPP_LISTE_H
