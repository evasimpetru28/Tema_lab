#include <iostream>
#include "Prajitura.h"
#include "Bomboane.h"
#include "Inghetata.h"
#include "Tort.h"
#include "Fursecuri.h"
#include <string>

using namespace std;

int main() {
    std::cout << "Lista prajituri" << std::endl;
    float d = 10.2;
    string s= "savarinuta";
    float c = 100;

    Produs savarina(s, d, c);

    Produs 1 = new Produs("produs1", 10.2, 100);

    savarina.print_nume(1);

    // citim fisier cu lista produse (10 savarina  3 pateu 2 covrigi 2 amandine 1 tort)
    // afisamn pretul total


    return 0;
}
