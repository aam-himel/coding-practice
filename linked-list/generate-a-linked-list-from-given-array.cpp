#include <bits/stdc++.h>
using namespace std;

class node
{
    int data;
    node *next;

    node(int val)
    {
        next->data = val;
        next->next = NULL;
    }
};

node *arrayToList(node *&head, vector<int> arr)
{
}

int main()
{
    node *head = new node(10);
    cout << head;

    return 0;
}