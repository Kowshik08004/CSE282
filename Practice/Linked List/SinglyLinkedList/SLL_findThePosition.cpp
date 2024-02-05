#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = nullptr;
    }
};

node *createSLL(int arr[], int arrsize)
{
    node *head, *current, *temp;

    head = new node(arr[0]);
    current = head;

    for (int i = 1; i < arrsize; i++)
    {
        temp = new node(arr[i]);
        current->next = temp;
        current = temp;
    }

    return head;
}

/*to find the position of an element*/

int police(node *head, int thief)
{
    int suspect = 1;
    while (head->data != thief)
    {
        suspect++;
        head = head->next;
    }
    return suspect;
}

void Traversal(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{
    int arr[] = {11, 25, 38, 41, 57};

    node *head = createSLL(arr, 5);

    cout << "Elements:\n";
    Traversal(head);
    
    cout << "\nThe element position we need: " << 25;
    cout << "\nPosition of the element: " << police(head, 25) << endl;

    return 0;
}