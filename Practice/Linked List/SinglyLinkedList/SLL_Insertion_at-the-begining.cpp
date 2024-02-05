#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void LinkedlistTraversal(Node *temp) {
    while(temp != NULL) {
        cout << "Elements: "<<temp->data<<endl;
        temp = temp->next;
    }
}

//Function for insert a new elemenet in begining of a linked list
Node *InsertionAtTheBegining(Node *oldhead, int data){
    Node *newhead = (Node*)malloc(sizeof(Node));
    newhead->data = data;

    newhead->next = oldhead;
    return newhead;
}

int main()
{
    //Creating nodes of a linked list
    Node *head;
    Node *second;
    Node *third;

    //Memory allocation of a node in linked list in heap memory
    head = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));

    //putting data and address in a node
    head->data = 23;
    head->next = second;

    second->data = 45;
    second->next = third;

    //Terminating the linked list by NULL
    third->data = 90;
    third->next = NULL;

    cout << "Before insertion: \n";

    //Linked list traversing    
    LinkedlistTraversal(head);
    cout << "-------------------------"<<endl;

    cout << "After intertion: \n";
    
    //Function call for insertion
    head = InsertionAtTheBegining(head,40);

    LinkedlistTraversal(head);

    return 0;
}