#include<iostream>
//references are an alternative name for a variable. They must be initialized when declared and cannot be null.
// its like a allias for a variable.
void increment(int value)
{
    value++;
}
void incrementbyptr(int *ptr) //reference variable
{
    (*ptr)++;
}
void incrementbyref(int &ref) //reference variable
{
    ref++;
}
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}   
int main()
{
 int a=10;
 int &ref=a; //reference must be initialized when declared
 increment(ref);
    std::cout<<a<<std::endl;
 incrementbyptr(&a);
    std::cout<<a<<std::endl;
 incrementbyref(ref);
    std::cout<<a<<std::endl;
std::cout<<"Enter two numbers to be swapped:";
int x,y;
std::cin>>x>>y;
swap(x,y);
std::cout<<"After swapping: "<<x<<" "<<y<<std::endl;
}