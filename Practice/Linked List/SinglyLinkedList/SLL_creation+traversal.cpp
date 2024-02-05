#include <iostream>
#include <stdlib.h> //This library function is needed to use the malloc function for dynamic memory allocation
using namespace std;

struct Node {  //Self referencing structure
    int data;
    Node *next;
};

void LinkedlistTraversal(Node *temp) {
    while(temp != NULL) {
        cout << "Elements: "<<temp->data<<endl;
        temp = temp->next;
    }
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

    //Linked list traversing    
    LinkedlistTraversal(head);

    return 0;
}