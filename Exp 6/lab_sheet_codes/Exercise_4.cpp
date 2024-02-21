//Write a C++ program to determine whether a given tree is perfect
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

//Finding height
int tree_height(node *root)
{
    if (root == NULL)
        return 0;

    int left_height = tree_height(root->left);
    int right_height = tree_height(root->right);

    return max(left_height, right_height) + 1;
}

// Check balance or not
bool isPerfect(node *root)
{
    node *temp = root;
    if (temp == NULL)
    {
        return true;
    }
    if (!isPerfect(temp->left))
    {
        return false;
    }
    if (!isPerfect(temp->right))
    {
        return false;
    }

    int lh = tree_height(temp->left);
    int rh = tree_height(temp->right);

    if (lh == rh)
    {
        return true;
    }
    else
    {
        return false;
    }
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

    if (isPerfect(root))
    {
        cout << "Perfect Tree\n";
    }
    else
    {
        cout << "Not a Perfect Tree\n";
    }

    return 0;
}
