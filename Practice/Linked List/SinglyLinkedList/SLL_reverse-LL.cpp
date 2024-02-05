#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node* reversal(Node* head)
{
    Node* prev = NULL;
    Node* current = head;
    Node* after;

    while(current != NULL)
    {
        after = current->next;
        current->next = prev;

        prev = current;
        current = after;
    }

    return prev;
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

    cout<<"Before reversal: \n";
    LinkedlistTraversal(head);
    cout << "===================\n";
    head = reversal(head);
    cout<<"After reversal: \n";
    LinkedlistTraversal(head);

    return 0;
}
