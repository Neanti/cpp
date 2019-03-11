//
// Created by neati on 11/02/19.
//

#ifndef CPP_TLIST_H
#define CPP_TLIST_H

#include "Tnoeud.h"

template <class T>
class Tlist {
public:
    Tlist(Tnoeud<T> *premier);

    Tlist(){}

    Tnoeud<T> *getPremier() const;

    void setPremier(Tnoeud<T> *premier);

    void add_front(T d);

    void addNew(T data);

    Tnoeud<T>* getLast();

    void aff();

    void add_back(Tnoeud<T>* n);

private:
    Tnoeud<T>* premier;
};


#endif //CPP_TLIST_H
