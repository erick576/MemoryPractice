#include "../headers/Clothing.hpp"
using namespace std;
#include <iostream>

Clothing::Clothing(string name)
: name(name){};

Clothing::Clothing(Clothing *const c)
: name(c->name){};

void Clothing::printPiece(){
    cout << "This Clothing is Named " << this->name << "\n";
}

Clothing::~Clothing() {
    cout << "Deleted Clothing " << this->name << "\n";
}

