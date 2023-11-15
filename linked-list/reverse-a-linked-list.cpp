#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// reverse linked list

node *reverseList(node *&head)
{
    node *prevptr = NULL;
    node *currentptr = head;
    node *nextptr;

    while (currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = prevptr;
        prevptr = currentptr;
        currentptr = nextptr;
    }
    return prevptr;
}

void insertAtTail(node *&head, int data)
{
    node *newData = new node(data);
    if (head == NULL)
    {
        head = newData;
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newData;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL \n";
}

int main()
{
    node *head = new node(1);
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    cout << "before reverse\n";
    display(head);

    node *newNode = reverseList(head);
    cout << "after reverse\n";

    display(newNode);
    return 0;
}