#include "../headers/Shirt.hpp"
#include <iostream>

Shirt::Shirt(string name) : Clothing(name) {};

Shirt::Shirt(Shirt *const c)
        : Clothing(c->name){};

void Shirt::printPiece(){
    cout << "This Shirt is Named " << this->name << "\n";
}

Shirt::~Shirt() {
    cout << "Deleted Shirt " << this->name << "\n";
}
