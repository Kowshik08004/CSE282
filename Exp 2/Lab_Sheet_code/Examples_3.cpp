//Example 3: Insert a node at the beginning of the list. Time = 00:35:19

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

//Insertion at first in a linked list
node *InsertionAtTheBeginning(node *head, int data)
{
    node *newnode = NULL;
    //Edge case 1: If the list is empty
    if (head == NULL)
    {
        newnode = (node *)malloc(sizeof(node));
        newnode->data = data;
        return newnode;
    }
    //Edge case 2: If the list is not empty
        newnode = (node *)malloc(sizeof(node));
        newnode->data = data;
        newnode->next = head;
        return newnode;
}

void LLTrevarsal(node *head)
{
    node *runner = head;
    while (runner != NULL)
    {
        cout << runner->data << " ";
        runner = runner->next;
    }
}

int main()
{
    /* WHEN THE LINKED LIST IS EMPTY:
    ================================= */
    // node *head = NULL;

    /* WHEN THE LIST IS NOT EMPTY:
    =================================*/

    node *head;
    node *second;
    node *third;

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));

    head->data = 23;
    head->next = second;

    second->data = 45;
    second->next = third;

    third->data = 90;
    third->next = NULL;

    head = InsertionAtTheBeginning(head, 4812);
    LLTrevarsal(head);
    return 0;
}