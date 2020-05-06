#ifndef EXPERIMENTING3_WARDROBE_HPP
#define EXPERIMENTING3_WARDROBE_HPP
#include <vector>
#include <iostream>
#include "Clothing.hpp"
using namespace std;

class Wardrobe {
    vector<Clothing> clothes;
    string name;
public:
    Wardrobe(vector<Clothing>* clothes, string name);
    void printList();
    void addPiece(Clothing piece);
};

#endif //EXPERIMENTING3_WARDROBE_HPP
