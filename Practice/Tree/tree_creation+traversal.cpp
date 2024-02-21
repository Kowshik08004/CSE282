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

// Inorder Traversal Function
void inorderTraversal(node *temp)
{
    if(temp == NULL) 
        return;

    inorderTraversal(temp -> left);
    cout << " " << temp->data <<" ";
    inorderTraversal(temp->right);
}

// preorder Traversal Function
void preorderTraversal(node *temp)
{
    if(temp == NULL) 
        return;

    cout << " " << temp->data <<" ";
    preorderTraversal(temp -> left);
    preorderTraversal(temp->right);
}

// postorder Traversal Function
void postorderTraversal(node *temp)
{
    if(temp == NULL) 
        return;

    postorderTraversal(temp -> left);
    postorderTraversal(temp->right);
    cout << " " << temp->data <<" ";
}



int main()
{
    //Creating a tree
    node *root = new node(5);
    root -> left = new node(3);
    root -> left -> left = new node(4);
    root -> left -> right = new node(7);
    root -> right = new node(2);
    root -> right -> left = new node(9);
    root -> right -> right = new node(7);

    cout << "Inorder traversal: ";
    inorderTraversal(root);

    cout << "\npreorder traversal: ";
    preorderTraversal(root);
    
    cout << "\npostorder traversal: ";
    postorderTraversal(root);
    
    return 0;
}