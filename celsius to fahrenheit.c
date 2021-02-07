#include <stdio.h>

int main()
{
    int C;
    printf("Enter celsius : ");
    scanf("%d", C);
    float F;
    F = (1.8 * C) + 32;
    printf("%9.2f\n", F);
    return 0;
}