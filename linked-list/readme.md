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
