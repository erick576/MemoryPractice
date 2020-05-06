#ifndef EXPERIMENTING3_SHOE_HPP
#define EXPERIMENTING3_SHOE_HPP
#include "Clothing.hpp"
#include <iostream>
using namespace std;

class Shoe : public Clothing {
public:
    Shoe(string name);
    virtual ~Shoe();
    virtual void printPiece();
};


#endif //EXPERIMENTING3_SHOE_HPP
