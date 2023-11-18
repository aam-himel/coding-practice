## reverse a linked list

```cpp
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
```

## Merge two sorted linked list

```cpp
    node *merge(node *&head1, node *&head2)
{
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *dummyNode = new node(-1);
    node *ptr3 = dummyNode;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
    }
    return dummyNode->next;
}
```

## Linked list cycle detection

```cpp
bool checkCircle(node *&head)
{
    node *fast = head;
    node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
```

## Remove duplicate from a sorted linked list

```cpp
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
```
