#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;

    node(int x, node *before, node *after)
    {
        data = x;
        prev = before;
        next = after;
    }
};

node *createDLL(int arr[], int arrsize)
{
    node *head = NULL, *temp = NULL, *prev = NULL;

    head = new node(arr[0], NULL, NULL);
    prev = head;

    for (int i = 1; i < arrsize; i++)
    {
        temp = new node(arr[i], prev, NULL);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void ForwardTraversal(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

void BackwardTraversal(node *head)
{
    node *last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    while (last != NULL)
    {
        cout << last->data << " -> ";
        last = last->prev;
    }
    cout << "NULL";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    node *head = createDLL(arr, 5);

    cout << "\nForward Traversal:\n";
    ForwardTraversal(head);
    cout << "\nBackward Traversal:\n";
    BackwardTraversal(head);

    return 0;
}