#include <iostream>
#include <stdio.h>
#include <vector>
#include "Client.h"
#include "Liste.h"
#include "Tnoeud.h"
#include "Tlist.h"

using namespace std;

int main() {

    Tlist<char*>* l = new Tlist<char*>();
    char tmp[64];
    printf("nom classe :\n");
    cin >> tmp;
    l->addNew(tmp);
    cout << "nombre d attributs :" << endl;
    cin >> tmp;
    l->addNew(tmp);
    int f = atoi(tmp);
    int i = 0;*
    while (i < f)
    {
        i++;
    }

     l->aff();


    return 0;
}