#include <bits/stdc++.h>
 
LinkedListNode<int>* getMid(LinkedListNode<int>* head) {
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head->next;
 
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
 
    return slow;
}
 
LinkedListNode<int>* reverse(LinkedListNode<int>* head) {
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* next = NULL;
 
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;