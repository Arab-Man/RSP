#include <iostream>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head;
struct node *current = NULL;

void printList() {
    struct node *p = head;
    std::cout << " [";
    while(p != NULL) {
      std::cout << " " << p->data << " ";
      p = p->next;
   }
   std::cout << "]" << std::endl;
}

void insertion(int data_) { // Insertion at beginning
    struct node *m = new node;
    m->data = data_;
    m->next = head;
    head = m;
}

int main() {
    insertion(5);
    insertion(9);
    insertion(20);
    insertion(65);
    insertion(2);
    insertion(12);

    printList();

    return 0;
}