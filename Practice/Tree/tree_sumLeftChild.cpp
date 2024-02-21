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
    node *root = new node(5);
    root->left = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(7);
    root->left->left->left = new node(8);
    root->right = new node(2);
    root->right->left = new node(9);
    root->right->right = new node(7);

    cout << "Sum of the left child: " << sumLeftChild(root) <<endl;;
    

    return 0;
}
