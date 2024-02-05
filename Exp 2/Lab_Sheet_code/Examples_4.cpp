//Example 4: Insert a node at the end of the list. [Assume the list already has two nodes.] Time: 00:10:00

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

//Insertion at last in a linked list

node *InsertionAtTheEnd(node *head, int newdata)
{
    node *runner = head, *newnode;
    /*Edge case 1: The list is empty
    ====================================================*/

    if(head == NULL){
        head = (node*)malloc(sizeof(node));
        head->data = newdata;
        head->next = NULL;

        return head;
    }

    /*Edge case 2: The list has only one node and Edge case 3: The list has more than one node
    ================================================================================================*/

    //Finding the last node
    while (runner->next != NULL)
    {
        runner = runner->next;
    }

    //Creating a new last node
    newnode = (node *)malloc(sizeof(node));
    newnode->data = newdata;
    newnode->next =NULL;

    //Linking the old last to new last node
    runner->next = newnode;

    return head;
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
    /*The list is empty
    ==========================================*/
//     node *head = NULL;

    /*The list has only one node
    ==========================================*/
//     node *head;
//
//     head = (node *)malloc(sizeof(node));
//
//     head->data = 23;
//     head->next = NULL;

    /*The list has more than one node
    =========================================*/
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


    head = InsertionAtTheEnd(head, 4812);
    LLTrevarsal(head);

    return 0;
}
