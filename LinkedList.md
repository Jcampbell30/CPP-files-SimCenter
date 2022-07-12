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
class node
{
  public:
  int data;
  node* next;
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
## Traversing a linked list
```C++
//This function prints the value of the data and the memory address of next node
void printList(node* n)
//function to print linked list
{
  
   while(n!=NULL)
   {
       std::cout<<n->data<< " "<<std::endl;
       std::cout<<n->next<<" "<<std::endl;
       n = n->next;
   }
 
}
```
## Output
```
1 
0x5579d8a482a0 
2 
0x5579d8a482c0 
3 
0x5579d8a482e0 
4 
0 
NOTE: The fourth node's next value is 0 or NULL because it is the last member of the list and does not link to another node.
```
