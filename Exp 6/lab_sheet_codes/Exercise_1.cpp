//Write a C++ program to find the height of the following tree
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

// Find height of a tree, defined by the root node
int tree_height(node *root)
{
    if (root == NULL)
        return 0;

    // Find the height of left, right subtrees
    int left_height = tree_height(root->left);
    int right_height = tree_height(root->right);

    // Find max(subtree_height) + 1 to get the height of the tree
    return max(left_height, right_height) + 1;
}

int main()
{
    node *root = new node(50);
    root->left = new node(17);
    root->left->left = new node(12);
    root->left->left->left = new node(9);
    root->left->left->right = new node(14);
    root->left->right = new node(23);
    root->left->right->right = new node(19);
    root->right = new node(72);
    root->right->left = new node(54);
    root->right->left->right = new node(67);
    root->right->right = new node(76);

    cout << "Height of the tree: " << tree_height(root)-1 << endl;

    return 0;
}