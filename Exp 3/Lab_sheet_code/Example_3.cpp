//Example 3: Create a doubly linked list from an array of values
#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node* next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void traverse(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data <<" -> ";
        temp = temp->next;
    }
    cout << "NULL ";
}

int main()
{
    node *head;
    node *second;
    node *third;
    node *fourth;

    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof(node));
    fourth = (node*)malloc(sizeof(node));

    head->data = 23;
    head->next = second;

    second->data = 45;
    second->next = third;

    third->data = 90;
    third->next = fourth;

    fourth->data = 49;
    fourth->next = NULL;
    
    traverse(head);

    return 0;
}