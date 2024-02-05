//Example 2: Create a linked list from an array and return the head. Time: 00:49:25

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

//Creating Linked list from a given array
Node *CreateLinkedList(int arr[], int arrSize){
    Node *head = NULL, *current = NULL, *temp = NULL;
    for(int i = 0; i<arrSize; i++){
        //Creating new node
        temp = (Node*)malloc(sizeof(Node));
        temp->data = arr[i];
        temp->next = NULL;

        //Linking the new node
        if(head == NULL){
            head = temp;
            current = temp;
        }
        else{
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}   

void LLTrevarsal(Node *head){
    Node *runner = head;
    while (runner != NULL)
    {
        cout << runner->data << " ";
        runner = runner->next;
    }
    
}

int main()
{
    int a[] = {12,23,4,5,56,8,4};
    int n = sizeof(a)/sizeof(a[0]);
    Node *head = CreateLinkedList(a,n);
    LLTrevarsal(head);

    return 0;
}