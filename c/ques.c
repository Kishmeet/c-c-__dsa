#include<stdio.h>
int main(){
 int a=100;
 int *ptr=&a;

	printf("%d %p\n", a, ptr);
	printf("%p %p\n", &a, ptr);
	printf("%d %d\n", a, *(&a));
	printf("%p %d\n", &ptr, *ptr);
	printf("%d %d\n", *ptr, a + *ptr);
	printf("%d %d\n", *ptr, **&ptr);
	printf("%d %d\n", *ptr++, a); 
    ptr=&a;
	printf("%d %d\n", ptr==(&a), (*ptr)==a);
	printf("%d %d\n", (*ptr) + 5, a - 5);
	printf("%d %d\n", **(&ptr), *&a);
}