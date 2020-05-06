#include <string>
#include <iostream>
using namespace std;
#include <vector>
#include "headers/Clothing.hpp"
#include "headers/Shirt.hpp"
#include "headers/Shoe.hpp"
#include "headers/Pants.hpp"
#include "headers/Wardrobe.hpp"

int main() {

    // Creates One Shirt Object
    auto s1 = std::make_unique<Shirt>("Blue T-Shirt");

    //Creates One Pants Object
    auto p1 = std::make_unique<Pants>("Black Pants");

    // Creates One Shoe Object
    auto sh1 = std::make_unique<Shoe>("Red Shoe");

//    // Creates Three Clothing Objects
//    Clothing* c = &s1;
//    Clothing* c1 = &sh1;
//    Clothing* c2 = &p1;

    // Will Call the Method printPiece() for their Respective Sub Class (Shirt, Shoe, Pant)
    s1->printPiece();
    sh1->printPiece();
    p1->printPiece();
    cout << "\n";

//    vector<Clothing*> clothes;
//
//    // Reserving the Memory Prevents It from Copying Elements every time a New Element is Added
//    clothes.reserve(3);

//    // Every Time a Piece of Clothing is added to the Vector It doesnt add the Reference to the Object A copy of It is Created
//    clothes.push_back(*c);
//    clothes.push_back(*c1);
//    clothes.push_back(*c2);

    // Will Make Another Copy of the Elements in the Vector
    Wardrobe collection("Eric Kwok");

    // Doing This Rather Than the Method Above Creates Less Copies of the Objects
    collection.addPiece(std::move(s1));
    collection.addPiece(std::move(p1));
    collection.addPiece(std::move(sh1));

    // Will call The printPiece() from Clothing and not their SubClasses as a Copy of each Element was made passing it in a Vector
    collection.printList();

//    // Showing that a new Copy was made when passing the Clothing into the Vector
//    if(&clothes[0] == c){
//        cout << "Yes";
//    }
//    else {
//        cout << "&clothes[0] Address: " << &clothes[0] << "  c Address: " << c << "\n";
//        clothes[0].printPiece();
//        c->printPiece();
//        cout << "\n";
//    }

    return 0;
}

