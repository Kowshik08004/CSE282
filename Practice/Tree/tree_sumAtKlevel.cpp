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

// Finding sum at Kth level of a tree
int sumAtKlevel(node *root, int K)
{
    if (root == NULL)
    {
        return -1;
    }

    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
            if (level == K)
            {
                sum += temp->data;
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
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
    root->right = new node(2);
    root->right->left = new node(9);
    root->right->right = new node(7);

    cout << "Sum of the element at Kth level: " << sumAtKlevel(root, 1) << endl;

    return 0;
}
