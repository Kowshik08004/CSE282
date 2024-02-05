//Example 1: Delete element from a particular position of the SLL
#include <iostream>
#include <stdlib.h> 
using namespace std;

struct Node { 
    int data;
    Node *next;
};

Node *delAtIndex(Node *head, int index) //Here, the value of index > 1
{
    Node *prev = head, *current = head->next;
    int count = 2;
    while(current != NULL)
    {
        if(count == index)
            break;
        prev = prev->next;
        current = current->next;
        count++;
    }
    prev->next = current->next;
    delete(current);
    return head;
}

void LinkedlistTraversal(Node *temp) {
    while(temp != NULL) {
        cout << "Elements: "<<temp->data<<endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    head = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));
    fourth = (Node*)malloc(sizeof(Node));

    head->data = 23;
    head->next = second;

    second->data = 45;
    second->next = third;

    third->data = 90;
    third->next = fourth;

    fourth->data = 49;
    fourth->next = NULL;
  
    LinkedlistTraversal(head);
    head = delAtIndex(head,4);
    LinkedlistTraversal(head);

    return 0;
}