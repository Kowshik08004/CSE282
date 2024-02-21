#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left, *right;

    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};



int main()
{
    node *root = new node(5);
    root->left = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(7);
    root->left->right->left = new node(0);
    root->right = new node(2);
    root->right->left = new node(9);
    root->right->right = new node(7);

    
    return 0;
}