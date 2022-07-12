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
## Main Method Implementation:
```C++
int main()
{
   //creating four nodes
   node* head = NULL;
   node* second = NULL;
   node* third = NULL;
   node* fourth = NULL;
 
   //allocate four nodes in the heap
   head = new node();
   second = new node();
   third = new node();
   fourth = new node();
 
 
 
   head->data = 1; // assign data in first node
   head->next = second; // Link first node with
   // the second node
 
   // assign data to second node
   second->data = 2;
    // Link second node with the third node
   second->next = third;
 
   third->data = 3; // assign data to third node
 
   third->next = fourth;//Link third to fourth node
  
   fourth->data = 4;//Assign data to fourth node
   fourth->next = NULL;//No link
 
}
```

