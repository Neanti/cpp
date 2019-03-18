#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include "Client.h"
#include "Liste.h"
#include "Tnoeud.h"
#include "Tlist.h"

using namespace std;

void Cout(Tlist<char*>* l)
{
    Tnoeud<char*>* n = l->getPremier();
    cout << "class " << n->getData() << "{" << endl;
    n = n->getNext();
    int nb = atoi(n->getData());
    int i = 0;
    n = n->getNext();
    cout << "private:" << endl;
    while(i < nb)
    {
        cout << n->getData() << ";" << endl;
        n = n->getNext();
        i++;
    }
    nb = atoi(n->getData());
    n = n->getNext();
    //cout << nb << "ee" << endl;
    i = 0;
    cout << "public:" << endl;
    while(i < nb)
    {
        cout << n->getData() << ";" << endl;
        n = n->getNext();
        i++;
    }
    cout << "};" << endl;
}

void Jout(Tlist<char*>* l)
{
    Tnoeud<char*>* n = l->getPremier();
    cout << "public class " << n->getData() << "{" << endl;
    n = n->getNext();
    int nb = atoi(n->getData());
    int i = 0;
    n = n->getNext();
    while(i < nb)
    {
        cout << "private " << n->getData() << ";" << endl;
        n = n->getNext();
        i++;
    }
    nb = atoi(n->getData());
    n = n->getNext();
    //cout << nb << "ee" << endl;
    i = 0;
    while(i < nb)
    {
        cout << "public " << n->getData() << "{" << endl << "}" << endl;
        n = n->getNext();
        i++;
    }
    cout << "}" << endl;
}

void pop(char* s)
{
    int i = 0;
    while(i < 64)
    {
        if(s[i] == '\n')
            s[i] = '\0';
        i++;
    }
}

int main() {

    Tlist<char*>* l = new Tlist<char*>();
    char tmp[64];
    printf("Nom classe :\n");
    cin >> tmp;
    l->addNew(tmp);
    cout << "Nombre d'attributs :" << endl;
    cin >> tmp;
    l->addNew(tmp);
    int f = atoi(tmp);
    int i = 0;
    fgets(tmp,100,stdin);
    while (i < f)
    {
        cout << "Entrez un attribut :" << endl;
        fgets(tmp,100,stdin);
        pop(tmp);
        l->addNew(tmp);
        i++;
    }
    cout << "Nombre de méthodes :" << endl;
    cin >> tmp;
    l->addNew(tmp);
    f = atoi(tmp);
    i = 0;
    fgets(tmp,100,stdin);
    while (i < f)
    {
        cout << "Entrez une méthode :" << endl;
        fgets(tmp,100,stdin);
        pop(tmp);
        l->addNew(tmp);
        i++;
    }
     l->aff();
    cout << "Sortie sous quelle forme ?" << endl;
    fgets(tmp,100,stdin);
    if(tmp[0] == 'j')
        Jout(l);
    else
        Cout(l);

    return 0;
}