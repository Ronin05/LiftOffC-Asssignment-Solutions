#include <stdio.h>

int main()
{
    int r, d;
    printf("Enter the radius of the circle : ");
    scanf("%d", &r);
    d = r * 2;
    printf("Diameter of the circle is : %d", d);
    float C;
    C = (3.14) * r * 2;
    printf("\nCircumference of the circle is : %f", C);
    float A;
    A = (3.14) * r * r;
    printf("\nArea of the circle is : %f", A);
    return 0;
}