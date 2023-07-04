#include <stdio.h>

int fun(int x)
{
    x = x + 10;
    return x;
}

int main()
{
    int a, b;
    a = 10;
    b = a + fun(a);
    printf("with the function call on the right, ");
    printf(" b is: %d\n", b);
    a = 10;
    b = fun(a) + a;
    printf("with the function call on the left, ");
    printf(" b is: %d\n", b);
}