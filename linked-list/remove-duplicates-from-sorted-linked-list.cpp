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

// insert at tail
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// remove duplicate
void removeDuplicate(node *&head)
{
    node *curr = head;
    node *next_next;
    if (curr == NULL)
        return;

    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            next_next = curr->next->next;
            delete (curr->next);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 2);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    removeDuplicate(head);
    display(head);

    return 0;
}