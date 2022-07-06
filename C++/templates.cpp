#include <iostream>
using namespace std;
/*
Why use Templates?
1.It is a general convention to follow the rule: DRY or (Don't Repeat Yourself)
2.By using templates, we don't need to repeat ourselves
3.Templates allows us to pass a type as a parameter and essentially has the compiler write code for us
4.Instead of writing a new function for each data type, we can specify the data type at the function call
*/


//Template returns the sum of two numbers
template<typename T> T addTwo(T x, T y)
{
    return (x + y);
}
//function returns the sum of two integers
int addTwoInts(int a, int b)
{
    return (a + b);   
}
//function returns the sum of two doubles
double addTwoDoubles(double a, double b){
    return (a + b);
}

int main()
{
    //in main I am calling addTwo(template) for an int type and double type
    cout << addTwo<int>(4,26) << endl;
    cout << addTwo<double>(4.3,4.5)<< endl;
    //I am calling add two ints
    cout << addTwoInts(4,26)<<endl;
    //I am calling add two doubles
    cout << addTwoDoubles(4.3,4.5)<<endl;

    //Conclusion: It is more effecient to use templates instead of creating functions for each data type

    //Output:30,8.8,30,8.8

}