#ifndef EXPERIMENTING3_WARDROBE_HPP
#define EXPERIMENTING3_WARDROBE_HPP
#include <vector>
#include <iostream>
#include "Clothing.hpp"
#include <memory>
using namespace std;

class Wardrobe {
    vector<unique_ptr <Clothing>> clothes;
    string name;
public:
    Wardrobe(string name);
    void printList();
    void addPiece(unique_ptr <Clothing>);
};

#endif //EXPERIMENTING3_WARDROBE_HPP
