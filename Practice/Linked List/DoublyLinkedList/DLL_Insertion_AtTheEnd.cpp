#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;

    node(int x, node *after, node *before)
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
        temp = new node(arr[i], NULL, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

/*to insert a node at the end of a DLL*/

node* insertAtEnd(node* head, int value)
{
    //Edge case 1: If the list is empty
    if (head == NULL)
    {
        head = new node(value, NULL, NULL);
        return head;
    }
    //For other edge case
    node *last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }

    node* newNode = new node(value, NULL, last);
    last->next = newNode;
    
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
    node *last;
    last = head;
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

    head = insertAtEnd(head, 6);
    
    cout << "\nAfter Insert:\n";
    ForwardTraversal(head);

    return 0;
}