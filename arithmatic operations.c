#include <stdio.h>

int main()
{
    int x, y, a, s, m, d, r;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("Enter another number : ");
    scanf("%d", &y);
    a = x + y;
    s = x - y;
    m = x * y;
    d = x / y;
    r = x % y;
    printf("Sum = %d\n", a);
    printf("Difference = %d\n", s);
    printf("Multiplication = %d\n", m);
    printf("Division = %d\n", d);
    printf("Remainder = %d\n", r);
    return 0;
}
