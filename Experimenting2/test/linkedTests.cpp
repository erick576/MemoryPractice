#include "../header/catch.hpp"
#include <iostream>
#include "../src/ListNode.cpp"
#define CATCH_CONFIG_FAST_COMPILE
using namespace std;

TEST_CASE("All Tests"){
    ListNode n(1, nullptr);
    ListNode n1(2, nullptr);
    ListNode n2(3, nullptr);
    ListNode n3(4, nullptr);
    ListNode n4(5, nullptr);
    ListNode n5(6, nullptr);
    ListNode n6(7, nullptr);
    ListNode n7(8, nullptr);
    ListNode n8(9, nullptr);

    SECTION("Value Tests"){
        CHECK(&n2 != nullptr);
        REQUIRE(n2.val == 3);
        CHECK(&n1 != nullptr);
        REQUIRE_FALSE(n1.val == 89);
        CHECK(&n8 != nullptr);
        REQUIRE(n8.val == 9);
        REQUIRE(n8.next == nullptr);
    }

    SECTION("Insert Tests"){
        n.insert(&n1);
        n.insert(&n2);
        n.insert(&n3);
        n.insert(&n4);
        n.insert(&n5);
        n.insert(&n6);
        n.insert(&n7);
        n.insert(&n8);

        int i = 1;
        ListNode *holder = &n;
        while(holder->next != nullptr){
            REQUIRE(holder->val == i++);
            holder = holder->next;
        }
        REQUIRE(holder->val == i);
    }

    SECTION("Remove Tests"){
        n.remove();
        n.remove();
        n.remove();
        n.remove();
        n.remove();
        n.remove();
        n.remove();
        n.remove();
        n.remove();
        REQUIRE(&n != nullptr);
    }
}





