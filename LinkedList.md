# Linked Lists in C++
## What is a Linked List?
```
A linked list is a data structure in which each instance or 'node' points to the subsequent node in the list.
A linked list has two parts: the data in which it contains, and the link to the next node
```
## Implementation:
```C++
//Linked Lists can be implemented with a class or a struct. The only difference is the access modifier.
//If implemented with a class, you must specify data as public.
class Node
{
  public:
  int data;
  Node* next;
};
```
