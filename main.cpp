#include <iostream>
#include <algorithm>

class Dice {

  public:
  int rollAttributesNewPlayer(){
    int sixSided;
    int myArr[4];
    int roll = 0;
    for(int i = 0; i < 4; i++)
    {
      sixSided = std::rand() % 6 + 1;
      myArr[i] = sixSided;
    }
    std::sort(myArr, myArr + 4);
    for(int j = 1; j < 4; j++)
    {
      roll = roll + myArr[j] ;
    }
  
    return roll;

  }

};

class Character: private Dice{
  int Strength = 0;
  int Dexterity = 0;
  int Constitution = 0;
  int Wisdom = 0;
  int Intelligence = 0;
  int Charisma = 0;
  int HP = 0;
  public:

  int setHP()
  {
    HP = 100;
    return HP;
  }
  void setAttributes()
  {
    this->Strength = rollAttributesNewPlayer();
    this->Dexterity = rollAttributesNewPlayer();
    this->Constitution = rollAttributesNewPlayer();
    this->Wisdom = rollAttributesNewPlayer();
    this->Intelligence = rollAttributesNewPlayer();
    this->Charisma = rollAttributesNewPlayer();
    this->HP = setHP();
  }
  void display(){
      std::cout<<"Your Strength is " << Strength << std::endl;
      std::cout<<"Your Dexterity is " << Dexterity << std::endl;
      std::cout<<"Your Constitution is " << Constitution << std::endl;
      std::cout<<"Your Wisdom is " << Wisdom << std::endl;
      std::cout<<"Your Intelligence is " << Intelligence << std::endl;
      std::cout<<"Your Charisma is " << Charisma << std::endl;
      std::cout<<"Your Health is: " << HP << std::endl;
  }

};
class Samurai: public Character{

  const char* name;
  const char* title;

  public:
  Samurai(){}
  Samurai (const char* name, const char* title) 
  {
    this->name = name;
    this->title = title;
  }
  void displayPlayerInfo()
  {
    std::cout<<this->name<<" "<<this->title<<std::endl;
    this->display();
  }
  
};
int main()
{

//Intsantiating new Objects of Class Samurai
Samurai Shiro("Shiro", "The Silver Blade");
Samurai Sakihara("Sakihara", "Dragon whisperer");
Samurai MoonGirl("Moongirl", "The Lone Wolf");


//Setting attributes of each object
Sakihara.setAttributes();
MoonGirl.setAttributes();
Shiro.setAttributes();


//displaying Player Atrributes
Shiro.displayPlayerInfo();
std::cout<<std::endl;
Sakihara.displayPlayerInfo();
std::cout<<std::endl;
MoonGirl.displayPlayerInfo();




Samurai myArr[3];
myArr[0] = Shiro;
myArr[1] = Sakihara;
myArr[2] = MoonGirl;



return 0;
}