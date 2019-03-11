//
// Created by neati on 11/02/19.
//
#ifndef CPP_TNOEUD_H
#define CPP_TNOEUD_H

template <class T>
class Tnoeud {
private:
    T data;
    Tnoeud* next;
public:
    Tnoeud(T data) : data(data) {}

    Tnoeud()
    {
    }

    T getData() {
        return data;
    }

    void setData(T data) {
        Tnoeud::data = data;
    }

    Tnoeud *getNext() const {
        return next;
    }

    void setNext(Tnoeud *next) {
        Tnoeud::next = next;
    }
};




#endif //CPP_TNOEUD_H
