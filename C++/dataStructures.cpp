#include <iostream>
#include <string>
// Include the cmath library
#include <cmath>
using namespace std;
//@author: Jared Cambpell
//Date(s): 05/25/2022, 05/26/2022
//This file demonstrates basic data structures using cpp
int age = 31;
string name;
string firstName;
string lastName;
double percentage = 4.5;
float score = 9.5;
char grade = 'A';
bool IsValid = true;


int main(){

    cout << "Hello World \n\n";
    cout << "I am Learning C++ \n";
    cout << "\n";
    //35RXaEBT0Zxsjhdj+UI=

    //How to get User Input


    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    name = firstName;
    name.append(" ");// adding a space to the end of the string objecet "name"
    name.append(lastName); //adding lastname to the name
    cout << "Your full name is: " << name << "\n";
    cout << "I am excited to learn C++, bash, and Linux\n\n";
    
    //Fun with Strings

    string sentence1 = "Hi, how are you today?\n";
    cout << "This is sentence1: " << sentence1 << "\n\n";
    cout << "The length of sentence1 variable is " << sentence1.length()<< "\n\n";//printing the length of the string
    cout << "The first letter in sentence1 is: " << sentence1[0] << "\n\n";//acessing the first charachter of the string
    sentence1[0] = 'P'; //changing the first charachter of sentence1 to P
    cout << sentence1 << "\n";

    //Fun with Math

    int x = 5;
    int y = 10;

    cout << max(x,y) << "\n";//returns the max of int values
    cout << min(x,y) << "\n";//returns the min of int values
    cout << sqrt(81) << "\n";
    cout << round(percentage) << "\n";
    cout << log(2) << "\n\n";
    

    //Fun with Conditional Statements

    if (x > y){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    
    int time = 22;
    if (time < 10) {
    cout << "Good morning. \n";
    } else if (time < 20) {
  cout << "Good day.";
    } else { cout << "Good evening. \n";} // Outputs "Good evening."
        
    //The same conditional statement above in shorthand

    string result = (time<18)? "Good day": "Good evening";
    cout << result << "\n";
    
    //Fun with Switch Statements
    int day = 7;
    switch (day)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
    cout << "Monday";
    break;
    case 3: 
    cout << "Tuesday";
    break;
    case 4: 
    cout << "Wednesday";
    break;
    case 5:
    cout << "Thursday";
    break;
    case 6:
    cout << "Friday";
    break;
    case 7:
    cout << "Saturday\n";
    break;
    
    default:
    cout << "No cases match";
        break;
    }

    
    //Fun with Loops

     //Prints all instances of "i" where it is less than 5
    int i = 0;
    while (i < 5) {
    cout << i << "\n";
    i++;
    }
     //Prints all instances of "i" where i is less than or equal to 10 in increments of 2
    cout << "\n";
    for(int i = 2; i <= 10; i+=2){
        cout << i << "\n";
    }
    //Note: Keyword(s) "Break" is used to jump out of a loop, "Continue" is used to skip itteration
    
    //Fun with Arrays

    int myNums[10] = {1,3,5,7,9,11,13,15,17,19};
    //initializing array variable called "myNums"

    //Looping through the Array to print specified values of myNums

    for (int i = 0; i < 10; i++)
    {  if(myNums[i] == 9){
           continue;
           //will skip the number 9 will not print it
       }
       if (myNums[i]== 15)
       {
            break;
            //if i is equal to 15 the loop will break
       }
       
       cout << myNums[i] << "\n\n";
    }
    //One can also create an array without initializing values

    int numList[6];
    int count = 5;
    for(int i = 0; i <= 6; i++){
       numList[i] = count;
       count+=5;
       cout << numList[i] << "\t";
    }
    //The array list is filled inside the for loop with values starting at 5 and incrementing by 5
    //The output will be 5,10,15,20,25,30,35
    
        cout << "\n\n";
    //Fun with Structs
    //35RXaEBT0Zxsjhdj+UI=
    struct {
        int points;
        string player;
    }
    game1,game2,game3,game4;

    game1.player = "Jared";
    game1.points = 10;
    game2.player = "Markia";
    game2.points = 15;
    game3.player = "Arwen Kate";
    game3.points = 100;
    game4.player = "Bella";
    game4.points = 0;

    cout << game1.player << "\n";
    cout << game1.points << "\n";

    //More fun with Structs
    
    struct car {
        string brand;
        string model;
        int year;
        string color;
    };
    car myCar1;
    myCar1.brand = "Ford";
    myCar1.model = "Fiesta";
    myCar1.year = 2016;
    myCar1.color = "Silver";

    car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Fusion";
    myCar2.year = 2014;
    myCar2.color = "Black";

    
    
    
    
    
    
    
    
    
    
    return 0;
}
