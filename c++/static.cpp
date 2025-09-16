//static variables and functions means that they belong to the class itself rather than to any specific object of the class.
//static members can be accessed using the class name or through any object of the class.
//static members are shared among all objects of the class, meaning that there is only one copy
#include <iostream>
struct entity
{
    static int x,y;
    int z;
    void Print()
    {
        std::cout<<x<<","<<y<<std::endl;
    }
    static void Print2(entity e)
    {
        std::cout<<x<<","<<y<<","<<e.z<<std::endl;
    }   
};
int entity::x;
int entity::y;
int main()
{
    entity e1;
    e1.x=5;
    e1.y=6;
    e1.z=7;

    //entity e2={50,60};  
    entity e2;
    e2.x=50;
    e2.y=60;
    e2.z=70;
    e1.Print();
    e2.Print();
    entity::Print2(e1);
    entity::Print2(e2);
    return 0;
}