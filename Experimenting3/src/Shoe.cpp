#include "../headers/Shoe.hpp"

Shoe::Shoe(string name) : Clothing(name) {};

Shoe::Shoe(Shoe *const c)
        : Clothing(c->name){};

void Shoe::printPiece(){
    cout << "This Shoe is Named " << this->name << "\n";
}

Shoe::~Shoe() {
    cout << "Deleted Shoe " << this->name << "\n";
}