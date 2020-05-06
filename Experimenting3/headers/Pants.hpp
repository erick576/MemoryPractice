#ifndef EXPERIMENTING3_PANTS_HPP
#define EXPERIMENTING3_PANTS_HPP
#include "Clothing.hpp"
#include <iostream>
using namespace std;

class Pants : public Clothing {
public:
    Pants(string name);
    Pants(Pants *const c);
    virtual ~Pants();
    virtual void printPiece();
};


#endif //EXPERIMENTING3_PANTS_HPP
