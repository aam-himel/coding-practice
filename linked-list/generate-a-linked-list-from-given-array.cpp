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

// array to linked list conversion
void arrayToLinkdedList(vector<int> nums, node *&head)
{
    node *temp = head;
    if (nums.size() == 0)
    {
        return;
    }
    if (nums.size() == 1)
    {
        head = new node(nums[0]);
        temp = head;
        return;
    }
    head = new node(nums[0]);
    temp = head;
    for (int i = 1; i < nums.size(); i++)
    {
        node *item = new node(nums[i]);
        temp->next = item;
        temp = temp->next;
    }
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    vector<int> nums = {1, 2, 3};
    arrayToLinkdedList(nums, head);
    display(head);
    return 0;
}