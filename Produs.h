//
// Created by eva on 07.03.2021.
//

#ifndef TEMA_LAB_PRODUS_H
#define TEMA_LAB_PRODUS_H


#include <string>
#include <iostream>
using namespace std;


class Produs {
protected:
    string nume;
    double pret;
public:
    Produs(string  pnume, double ppret) {
        this->nume =pnume;
        this->pret =ppret;
    }


};


#endif //TEMA_LAB_PRODUS_H
