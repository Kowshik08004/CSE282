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

/*to insert a node at the beginning of a DLL*/

node *insertAtFirst(node *head, int value)
{
    //Edge case 1: If the list is empty
    if (head == NULL)
    {
        head = new node(value, NULL, NULL);
        return head;
    }
    //For other edge case
    node *newNode = new node(value, NULL, head);
    head->prev = newNode;
    head = newNode;
    return head;
}

void ForwardTraversal(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
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


    cout << "\nBefore Insert:\n";
    ForwardTraversal(head);

    head = insertAtFirst(head, 0);
    
    cout << "\nAfter Insert:\n";
    ForwardTraversal(head);

    return 0;
}