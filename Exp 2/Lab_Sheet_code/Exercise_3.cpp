//3. Write a C++ program to delete the first node of a Singly Linked List.

# include<iostream>
#include <stdlib.h>
using namespace std;

struct node{
    int data;
    node* next;
};

//Edge case 1: Deleting the first  from the linked list
node* DeletionAtFirst(node* head){
    node* temp = head;
    head = head->next;
    delete(temp);
    return head;
}

void LinkedlistTraversal(node *temp) {
    while(temp != NULL) {
        cout << "Elements: "<<temp->data<<endl;
        temp = temp->next;
    }
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

    cout << "Before deletion: \n==================" <<endl;
    LinkedlistTraversal(head);

    head = DeletionAtFirst(head);
    cout << "After deletion: \n==================" <<endl;
    LinkedlistTraversal(head);


    return 0;
}
