#include "../headers/Shoe.hpp"

Shoe::Shoe(string name) : Clothing(name) {};


void Shoe::printPiece(){
    cout << "This Shoe is Named " << this->name << "\n";
}

Shoe::~Shoe() {
    cout << "Deleted Shoe " << this->name << "\n";
}