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
    float pret;
    float cantitate;

public:
    Produs(string pnume, float ppret, float pcantitate) {
        this->nume = pnume;
        this->pret = ppret;
        this->cantitate = pcantitate;
    }

    Produs(const Produs& ob);

    void citire(){
        cin>>nume>>pret>>cantitate;
    }

    void afisare() {
        cout<<nume<<' '<<pret<<' '<<cantitate<<endl;
    }

    void print_nume(std:: ostream& os) {
        os << this->nume;
    }


};

Produs::Produs(const Produs& ob) {
    nume = ob.nume;
    pret = ob.pret;
    cantitate = ob.cantitate;
}


#endif //TEMA_LAB_PRODUS_H
