//constructor is a special member function with the same name as the class
//it is automatically called when an object of the class is created
//destructor is a special member function with the same name as the class preceded by a tilde(~)
//it is automatically called when an object of the class is destroyed
#include <iostream>
class entity
{
public:
    int x, y;
    entity() // default constructor
    {
        x = 0;
        y = 0;
        std::cout << "Constructed an entity" << std::endl;
    }
    entity(int X, int Y) // parameterized constructor
    {

        x = X;
        y = Y;
    }
    ~entity() // destructor
    {
        std::cout << "destructor called" << std::endl;
    }
    void Print()
    {
        std::cout << x << "," << y << std::endl;
    }
};
int main()
{
    entity e1;
    e1.Print();
    entity e2(5, 6);
    e2.Print();
    return 0;
}