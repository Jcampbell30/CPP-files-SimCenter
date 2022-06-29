//Author: Jared Campbell
//Date: 06/27/2022

#include <iostream>
using namespace std;

class SuperHero{
public: //Access Specifier
string name;//instance variables name,age,attBonus,HP,power
int age;
float attBonus;
float HP;
string power;
//Constructor for class SuperHero
SuperHero(string n, int a, float at,float hp, string p)
{
    name = n;
    age = a;
    attBonus = at;
    HP = hp;
    power = p;
//Creating accessor methods
}
void getName(){
    cout << "this objects Name is: " << name << endl;
}
void getHP(){
    cout << "this objects HP is: " << HP << endl;
}
void getBonus(){
    cout << "this objects Attack Bonus is: " << attBonus << endl;
}
void getAge(){
    cout << "this objects Age is: " << age << endl;
}
void getSP(){
    cout << "this objects SuperPower is: " << power << endl;
}
};
//Main method
int main(){
    //Creating a superHero object called Dave
    SuperHero Dave("Super Dave",15,10,100,"Super Strength");
    
    Dave.getName();
    Dave.getSP();
    Dave.getAge();
    Dave.getBonus();
    Dave.getHP();

    //Creating a superHero object called Sally
    SuperHero Sally("Super Sally",16,7,100,"Super Speed");

    cout<<'\n';//adding a space to formatting

    Sally.getName();
    Sally.getAge();
    Sally.getBonus();
    Sally.getHP();
    Sally.getSP();
    
return 0;
}