#include <iostream>
#include <memory>
#include <mpi>

using namespace std;

void incriment(int &num)
{
    num+=1;
}
int main() 
{
    int x;
    cout<<"Enter a number between 1 and 100: ";
    cin>>x;
    while (x <= 0 || x > 100) 
    {
       cout<<"Enter a number between 1 and 100:";
       cin>>x;
    }
    incriment(x);
   cout<< x << endl;


    if( x > 0 && x < 50)
    {
        unique_ptr<int> ptr1 = make_unique<int>(4);//creating unique pointer
        unique_ptr<int> ptr2 = move(ptr1);//moving the old to the new one- you cannot copy unique pointers
        for(int i = 0; i < *ptr2; i++)//itterating the value- must de reference the address and get the value with *
        {
            cout<<"Unique pointer exists inside this conditional statement: limited to scope" <<endl;
        }
        
    }
    else
    {
        unique_ptr<float> uniquePie = make_unique<float>(3.14);
        cout<<"the value of this unique pointer is: " << *uniquePie <<endl;
    }
    cout<<"deletes unique pointer for you"<<endl;
    
    shared_ptr<int> sharePtr1 = make_shared<int>(20);//creating shared pointer
    auto sharePtr2 = sharePtr1;//setting the old address to the new one
    cout<< "this is sharePtr1 memory address: " << sharePtr1<<endl;
    cout<< "this is sharePtr2 memory address: " << sharePtr1<<endl;




 system("pause>nul");
return 0;
}