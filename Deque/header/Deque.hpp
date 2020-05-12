#ifndef DEQUE_DEQUE_HPP
#define DEQUE_DEQUE_HPP

#include <string>
#include <iostream>
#include <memory>

template <class T>
class Deque {
    std::shared_ptr <T> value[5];
    int size;
    int head;
    int tail;
public:
    Deque();
    ~Deque();
    void addFirst(std::shared_ptr <T> val);
    void addLast(std::shared_ptr <T> val);
    void removeFirst();
    void removeLast();
    T first();
    T last();
    bool isEmpty();
    void printArray();
private:
    void resize();
};

#endif //DEQUE_DEQUE_HPP
