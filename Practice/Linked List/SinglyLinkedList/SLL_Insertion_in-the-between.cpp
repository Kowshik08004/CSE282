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

//Function for insert a new elemenet in between of a linked list
Node *InsertionInBetween(Node *head, int data, int index){
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->data = data;
    Node *linker = head;

    //Finding the index
    int i = 0;
    while(i != index-2){
        linker = linker->next;
        i++;
    }
    //Linking the new node in the list
    newnode->next = linker->next;
    linker->next = newnode;
    return head;
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

    cout << "After intertion at index 2: \n";

    //Function call for insertion
    head = InsertionInBetween(head,35,2);

    LinkedlistTraversal(head);

    return 0;
}
