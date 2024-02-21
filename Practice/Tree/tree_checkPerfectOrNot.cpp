#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

//Finding height
int tree_height(Node *root)
{
    if (root == NULL)
        return 0;

    int left_height = tree_height(root->left);
    int right_height = tree_height(root->right);

    return max(left_height, right_height) + 1;
}

// Check balance or not
bool isPerfect(Node *root)
{
    Node *temp = root;
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
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

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
