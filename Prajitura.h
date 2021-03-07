//
// Created by eva on 07.03.2021.
//

#ifndef TEMA_LAB_PRAJITURA_H
#define TEMA_LAB_PRAJITURA_H


#include <iostream>
#include "Produs.h"

class Prajitura : public Produs {

public:
    Prajitura(string basicString, double d) : Produs(basicString, d) {

    }

    void printAttributes(){
        std::cout << this->nume ;
        std::cout << this->pret ;
    }
};


#endif //TEMA_LAB_PRAJITURA_H
