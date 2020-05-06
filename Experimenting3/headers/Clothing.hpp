#ifndef EXPERIMENTING3_CLOTHING_HPP
#define EXPERIMENTING3_CLOTHING_HPP
#include <string>
#include <iostream>
using namespace std;

class Clothing {
public:
    Clothing(string name);
    Clothing(Clothing *const c);
    virtual ~Clothing();
    virtual void printPiece();

protected:
    string name;
};
#endif //EXPERIMENTING3_CLOTHING_HPP
