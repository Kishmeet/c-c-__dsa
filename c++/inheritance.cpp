/*Inheritance in C++ is a core concept of Object-Oriented Programming (OOP) that allows a new class
 (the derived class or child class) to inherit properties and behaviors (data members and member functions) 
 from an existing class (the base class or parent class). 
This mechanism promotes code reusability and establishes a hierarchical relationship between classes. 
*/
#include<iostream>
class entity//parent
{  
public:
 float x,y;
 void move(float xa,float ya)
 {
  x=x+xa;
  y=y+ya;
 }

};
class player :public entity//child
{
public:    
 const char* name;
 player(int xa,int ya,const char*n)
 {
    x=xa;
    y=ya;
    name=n;
 }
void printname()
{
    std::cout<<name<<std::endl;
}
};
int main()
{  
    std::cout<<sizeof(entity)<<"\t"<<sizeof(player)<<std::endl;
    player P1(5,4,"kishmeet");
    P1.printname();

}
