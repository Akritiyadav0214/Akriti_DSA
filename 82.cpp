#include<iostream>

using namespace std;


struct ListNode {

      int val;

      ListNode *next;
}

class Solution {

public:

    ListNode* deleteDuplicates(ListNode* head) {

        if (!head || !head->next) return head;

        ListNode* temp = new ListNode(-1);

        temp -> next = head;

        ListNode* prev = temp;

        ListNode* curr = head;


        while (curr != NULL) {

            if (curr->next != NULL && curr->val == curr->next->val) {

                while (curr->next != NULL && curr->val == curr->next->val) {

                    curr = curr->next;

                }

                prev->next = curr->next;

            }

            else {

                prev = curr;

            }

            curr = curr -> next;

        }

        return temp -> next;

    }

};