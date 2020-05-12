#include "../header/Deque.hpp"
#include <string>
#include <iostream>
#include <memory>
#include <array>


template<class T>
Deque<T>::Deque()
: size(0), head(0), tail(0)
{};

template<class T>
Deque<T>::~Deque() {
    std::cout << "Destroyed Deque Object";
};

template<class T>
void Deque<T>::removeFirst() {
    try {
        if (this->isEmpty()) {
            throw "EmptyDequeException";
        }
        this->value[this->head] = NULL;
        this->head = (this->head + 1) % (sizeof(this->value) / sizeof(*this->value));
        this->size--;
    }
    catch(...){
        std::cout << "Deque is Empty! \n";
    }
};

template<class T>
void Deque<T>::removeLast() {
    try {
        if(this->isEmpty()){
            throw "EmptyDequeException";
        }
        this->value[this->tail] = NULL;
        this->tail = (this->tail - 1 + (sizeof(this->value)/sizeof(*this->value))) % (sizeof(this->value)/sizeof(*this->value));
        this->size --;
    }
    catch(...){
        std::cout << "Deque is Empty! \n";
    }
};

template<class T>
void Deque<T>::addFirst(std::shared_ptr<T> val) {
    if(size >= (sizeof(this->value)/sizeof(*this->value))){
//        this->resize();
        std::cout << "Full Deque \n";
        return;
    }
    if(this->size == 0){
        this->value[head] = val;
        this->size ++;
    }
    else {
        this->head = (this->head - 1 + (sizeof(this->value) / sizeof(*this->value))) % (sizeof(this->value) / sizeof(*this->value));
        this->value[head] = val;
    }
    this->size ++;
};

template<class T>
void Deque<T>::addLast(std::shared_ptr<T> val) {
    if(size >= (sizeof(this->value)/sizeof(*this->value))){
//        this->resize();
        std::cout << "Full Deque \n";
        return;
    }
    if(this->size == 0){
        this->value[tail] = val;
        this->size ++;
    }
    else {
        this->tail = (this->tail + 1) % (sizeof(this->value) / sizeof(*this->value));
        this->value[tail] = val;
    }
    this->size ++;
};

template<class T>
T Deque<T>::first() {
    if(!this->isEmpty())
    {
        return *this->value[head];
    }
    else{
        return NULL;
    }
};

template<class T>
T Deque<T>::last() {
    if(!this->isEmpty())
    {
        return *this->value[tail];
    }
    else{
        return NULL;
    }
};

template<class T>
bool Deque<T>::isEmpty() {
    return this->size == 0;
};

//template<class T>
//void Deque<T>::resize() {
//    std::shared_ptr <T> copy[this->size * 2];
//    int counter = 0;
//    for(int i = head; i != tail; i = (i + 1) % (sizeof(this->value)/sizeof(*this->value))){
//        copy[counter] = this->value[i];
//        counter ++;
//    }
//    this->head = 0;
//    this->tail = this->size;
//    this->value = *copy;
//};

template<class T>
void Deque<T>::printArray() {
    for(int i = 0; i < (sizeof(this->value)/sizeof(*this->value)); i++){
        if(this->value[i] == NULL){
            std::cout << "N/A ";
        }
        else {
            std::cout << *this->value[i] << " ";
        }
    }
    std::cout << "\n";
};


