#include<iostream>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prevA = list1;
    
    // move to (a-1)
    for(int i = 0; i < a - 1; i++) {
        prevA = prevA->next;
    }

    ListNode* afterB = prevA;
    
    // move to (b)
    for(int i = 0; i < b - a + 2; i++) {
        afterB = afterB->next;
    }

    // connect prevA to list2
    prevA->next = list2;

    // go to end of list2
    ListNode* tail = list2;
    while(tail->next) {
        tail = tail->next;
    }

    // connect tail to afterB
    tail->next = afterB;

    return list1;
    
    }
};