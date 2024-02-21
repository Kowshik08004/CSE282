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
bool isBalanced(node *root)
{
    node *temp = root;
    if(temp == NULL)
    {
        return true;
    }
    if(!isBalanced(temp->left))
    {
        return false;
    }
    if(!isBalanced(temp->right))
    {
        return false;
    }

    int lh = tree_height(temp->left);
    int rh = tree_height(temp->right);

    if(abs(lh-rh) <= 1)
    {
        return true;
    }else
    {
        return false;
    }
}

int main()
{
    node *root = new node(5);
    root->left = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(7);
    root->right = new node(2);
    root->right->left = new node(9);
    root->right->right = new node(7);

    if(isBalanced(root))
    {
        cout << "Balanced Tree\n";
    }else{
        cout << "Unbalanced Tree\n";
    }


    return 0;
}
