#include <string>
#include <iostream>
#include <memory>
#include "header/Deque.hpp"
#include "src/Deque.cpp"

int main() {
    auto s1 = std::make_shared<int>(1);
    auto s2 = std::make_shared<int>(2);
    auto s3 = std::make_shared<int>(3);
    auto s4 = std::make_shared<int>(4);

    Deque<int> deque;

    deque.removeFirst();
    deque.addFirst(s1);
    deque.printArray();
    deque.addFirst(s2);
    deque.printArray();
    deque.addLast(s3);
    deque.printArray();
    deque.addLast(s4);
    deque.printArray();
    deque.removeFirst();
    deque.printArray();
    deque.removeLast();
    deque.printArray();
    std::cout << deque.first() << " " << deque.last() << "\n";


    return 0;
}


