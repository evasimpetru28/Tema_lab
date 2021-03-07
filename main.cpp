#include <iostream>
#include "Prajitura.h"
#include <string>

using namespace std;

int main() {
    std::cout << "Lista prajituri" << std::endl;
    double d = 10.2;
    string s="savarinuta";




    Prajitura savarina(s,d);
    //savarina.nume="Savarina savuroasa";
    //savarina.pret=10;

    savarina.printAttributes();

    // citium fisier cu lista produse (10 savarina  3 pateu 2 covrigi 2 amandine 1 tort)
    // afisamn pretul total


    return 0;
}
