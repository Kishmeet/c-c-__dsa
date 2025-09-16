# include <iostream>
#include <cstring>
//A pointer is a variable that stores the memory address of another variable.
//Pointers are used for dynamic memory allocation, arrays, and functions.
#define print(x) std::cout << x << std::endl;
int main()
{ 
int a=10;
 void *ptr=nullptr; //void pointer can point to any data type
 ptr=&a; 
 //*ptr=20; //error: void pointer cannot be dereferenced
 int *p=(int *)ptr;
 print(ptr<<" "<<p);
 print(*p);
char*buffer=new char[8]; //dynamic memory allocation
memset(buffer,0,8); //initialize memory to 0 ,memset(buffer, 0, size) → safe for strings, because it creates a null-terminated string.
print(buffer);
delete[] buffer; //free memory
return 0;
}