// function definition- function is a block of code that performs a specific task .it is executed when it is called.
// function declaration- it tells the compiler about a function name, return type and parameters.

#include <iostream>
int add(int a, int b); // function declaration
void display(); // function declaration 

int main() {
    display();
    return 0;

}   
int add(int a, int b) {
    return a + b;
}
void display() {
    std::cout << "This is a display function." << std::endl;
       
    int sum = add(5, 6);
    std::cout << "Sum: " << sum << std::endl;
}
