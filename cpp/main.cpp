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
    Tnoeud<char*>* tmp = new Tnoeud<char*>();
    char stmp[64];
    printf("nom classe :\n");
    scanf("%s",stmp);
    tmp->setData(stmp);
    l->add_back(tmp);
    l->aff();

    return 0;
}