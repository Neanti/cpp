//
// Created by neati on 11/02/19.
//

#ifndef CPP_NOEUD2_H
#define CPP_NOEUD2_H


class Noeud2 {
public:
    Noeud2(int data);

    int getData() const;

    void setData(int data);

    Noeud2 *getRight() const;

    void setRight(Noeud2 *right);

    Noeud2 *getLeft() const;

    void setLeft(Noeud2 *left);

private:
    int data;
    Noeud2* right;
    Noeud2* left;
};


#endif //CPP_NOEUD2_H
