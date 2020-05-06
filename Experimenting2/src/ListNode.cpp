#include <iostream>

// Definition for singly-linked list
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    void insert(ListNode *node) {
        if(this == nullptr){this == node; return;}
        ListNode *holder = this;
        while(holder != nullptr) {
            if(holder->next == nullptr) {
                holder->next = node;
                return;
            }
            holder = holder->next;
        }
    };
    void remove(){
        if(this == nullptr){return;}
        if(this->next == nullptr){return;}
        ListNode *holder = this;
        while(holder->next->next != nullptr){
            holder = holder->next;
        }
        holder->next = nullptr;
    };

    bool valueExists(int val){
        if(this == nullptr){return false;}
        ListNode *holder = this;
        while(holder != nullptr) {
            if(holder->val == val) {
                return true;
            }
            holder = holder->next;
        }
        return false;
    }
};




