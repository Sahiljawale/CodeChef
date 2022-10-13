#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
  int data;
  node * next;
  node(int d) {
    data = d;
    next = NULL;
  }
};
void loopDetDelBetter(node * head) {
  // step 1
  node * slow = head, * fast = head;
  while (fast != NULL && fast -> next != NULL) {
    slow = slow -> next;
    fast = fast -> next -> next;
    if (slow == fast) break; // first meeting point
  }
  if (slow != fast) return;

  node * ptr1 = slow;
  node * ptr2 = slow;

  // step 2
  int x = 1;
  while (ptr2 -> next != ptr1) {
    ptr2 = ptr2 -> next;
    x++;
  }

  // step 3
  ptr1 = head; // move one pointer to head

  // move one pointer to xth node from head
  ptr2 = head;
  for (int i = 0; i < x; i++) {
    ptr2 = ptr2 -> next;
  }

  // step 4
  while (ptr1 != ptr2) {
    ptr1 = ptr1 -> next;
    ptr2 = ptr2 -> next;
  }

  // step 5
  while (ptr2 -> next != ptr1) {
    ptr2 = ptr2 -> next;
  }
  ptr2 -> next = NULL;
}
// to check if our approach is correct
bool FLD(node * head) {
  node * slow = head;
  node * fast = head;

  while (fast != NULL && fast -> next != NULL) {
    slow = slow -> next;
    fast = fast -> next -> next;
    if (slow == fast) return true;
  }
  return false;

}
int main() {
  node * head = new node(15);
  head -> next = new node(10);
  head -> next -> next = new node(12);
  head -> next -> next -> next = new node(20);
  head -> next -> next -> next -> next = head -> next;
  loopDetDelBetter(head);
  FLD(head) ? cout << "Loop Detected" : cout << "Loop not detected";
}