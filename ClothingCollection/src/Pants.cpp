#include "../headers/Pants.hpp"

Pants::Pants(string name) : Clothing(name) {};


void Pants::printPiece(){
    cout << "This Pant is Named " << this->name << "\n";
}

Pants::~Pants() {
    cout << "Deleted Pants " << this->name << "\n";
}
