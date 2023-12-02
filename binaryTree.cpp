#include <iostream>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

node *newNode(int data_) {
    struct node *p = new node;

    p->data = data_;

    p->left = p->right = NULL;

    return p;
}

int main() {
    node *root = newNode(5);

    root->left = newNode(8);
    root->right = newNode(21);
    root->left->left = newNode(54);

    return 0;
}
