#ifndef EXPERIMENTING3_SHIRT_HPP
#define EXPERIMENTING3_SHIRT_HPP
#include "Clothing.hpp"
#include <iostream>
using namespace std;

class Shirt : public Clothing {
public:
    Shirt(string name);
    virtual ~Shirt();
    virtual void printPiece();
};


#endif //EXPERIMENTING3_SHIRT_HPP
