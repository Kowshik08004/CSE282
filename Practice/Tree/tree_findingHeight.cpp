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
    node *root = new node(5);
    root->left = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(7);
    root->left->right->left = new node(0);
    root->right = new node(2);
    root->right->left = new node(9);
    root->right->right = new node(7);

    cout << "Height of the tree: " << tree_height(root) << endl;

    return 0;
}