//Write a C++ program to find the sum of the left child of a given tree
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

// Level order Traversal
int sumLeftChild(node *root)
{
    int sum = 0;
    if (root == NULL)
    {
        return 0;
    }

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
            sum += temp->data;
            if (temp->left)
            {
                q.push(temp->left);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
    return sum;
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

    cout << "Sum of the left child: " << sumLeftChild(root) <<endl;;
    

    return 0;
}
