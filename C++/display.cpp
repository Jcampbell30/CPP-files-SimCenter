#include "display.hpp"
using namespace std;
void printList(node* n)
{
    
    while(n!=NULL)
    {
        std::cout<<n->data<< " "<<std::endl;
        std::cout<<n->next<<" "<<std::endl;
        n = n->next;
    }

}