//
// Created by neati on 11/02/19.
//

#ifndef CPP_NOEUD_H
#define CPP_NOEUD_H


class Noeud {
public:
    Noeud(int data);

    int getData() const;

    void setData(int data);

    Noeud *getNext() const;

    void setNext(Noeud *next);

private:
    int data;
    Noeud* next;
};


#endif //CPP_NOEUD_H
