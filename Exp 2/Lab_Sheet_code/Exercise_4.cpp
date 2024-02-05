//4. Write a C++ program to delete the last node of a Singly Linked List

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

//Edge case 3: Deleting last node from a linked list
node *DeleteLastNode(node *head)
{
    node *temp = head, *target = head->next;
    while (target->next != NULL)
    {
        temp = temp->next;
        target = target->next;
    }
    temp->next = NULL;
    delete(target);

    return head;
}

void LinkedlistTraversal(node *temp)
{
    while (temp != NULL)
    {
        cout << "Elements: " << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{

    node *head;
    node *second;
    node *third;
    node *fourth;

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));

    head->data = 23;
    head->next = second;

    second->data = 45;
    second->next = third;

    third->data = 61;
    third->next = fourth;

    fourth->data = 90;
    fourth->next = NULL;

    cout << "Before deletion: \n========================= " << endl;
    LinkedlistTraversal(head);

    cout << endl;

    head = DeleteLastNode(head);
    cout << "After deletion: \n=========================" << endl;
    LinkedlistTraversal(head);

    return 0;
}
