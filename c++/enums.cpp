//enums are a user-defined type consisting of a set of named integral constants
#include <iostream>
enum  color{red,green,blue};
enum  fruit{apple=5,banana,orange};
int main()
{
    color c=red;
    std::cout<<c<<"\n"; //0
    c=green;
    std::cout<<c<<"\n"; //1
    c=blue;
    std::cout<<c<<"\n"; //2
    fruit f=apple;
    std::cout<<f<<std::endl; //5
    f=banana;
    std::cout<<f<<std::endl; //6
    f=orange;
    std::cout<<f<<std::endl; //7
    return 0;
}