#include <iostream>
int main() {
    int a = 10; // integer variable size-4 bytes
    int *q=&a;
    std::cout<<q<<std::endl;
    std::cout<<sizeof(a)<<std::endl;
    std::cout<<a<<std::endl;
    float b = 5.5; // floating-point variable size-4 bytes
    char c = 'A'; // character variable size-1 byte
    bool d = true; // boolean variable size-1 byte
    unsigned int e = 20; // unsigned integer variable size-4 bytes
    short  f = 30; // short integer variable size-2 bytes
    long long   g = 100000; // long long integer variable size-8 bytes
    a='A';
    int *p=&a;
    std::cout<<p<<std::endl;
    std::cout<<sizeof(a)<<std::endl;
    std::cout << "Integer: " << a << std::endl;
    std::cout << "Float: " << b << std::endl;
    std::cout << "Character: " << c << std::endl;
    std::cout << "Boolean: " << d << std::endl;
    std::cout << "Unsigned Integer: " << e << std::endl;
    std::cout << "Short Integer: " << f << std::endl;
    std::cout << "Long Long Integer: " << g << std::endl;

    return 0;
}   