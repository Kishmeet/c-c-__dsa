//Kishmeet Singh Khurana - 590014410 
#include <stdio.h>
int main()
{
    int a, b, res;
    char ch;
    printf("enter the mathematical expreesion (e.g. 1 * 2)\n");
    scanf("%d %c %d ", &a, &ch, &b);
    switch (ch)
    {
    case '+':
        res = a + b;
        printf("%d %c %d = %d", a, ch, b, res);
        break;
    case '-':
        res = a - b;
        printf("%d %c %d = %d", a, ch, b, res);
        break;
    case '*':
        res = a * b;
        printf("%d %c %d = %d", a, ch, b, res);
        break;
    case '/':
        res = a / b;
        printf("%d %c %d = %d", a, ch, b, res);
        break;
    case '%':
        res = a % b;
        printf("%d %c %d = %d", a, ch, b, res);
        break;

    default:
        printf("Invalid inputs");
        break;
    }
}