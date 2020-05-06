#include "../headers/Wardrobe.hpp"
using namespace std;
#include <iostream>
#include "../headers/Clothing.hpp"

Wardrobe::Wardrobe(vector<Clothing>* clothes, string name)
: clothes(*clothes), name(name)
{};

void Wardrobe::printList(){
    cout << "Clothing List \n";
    cout << "---------------------\n";
    for(std::vector<Clothing>::size_type i = 0; i != this->clothes.size(); i++) {
        cout << "Item " << i << ": ";
        this->clothes[i].printPiece();
    }
    cout << "\n";
}

void Wardrobe::addPiece(Clothing piece){
    clothes.push_back(piece);
}
