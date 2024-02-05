//2. Write a C++ program to find the length of a singly linked list. Time: 00:10:00


#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

//Function for calculating length of a linked list
int lengthLinkedlist(node *head)
{
    int count = 0;
    node *runner = head;
    while (runner != NULL)
    {
        runner = runner->next;
        count++;
    }
    return count;
}

int main()
{

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

    cout << "Length of the linked list: " << lengthLinkedlist(head) << endl;

    return 0;
}