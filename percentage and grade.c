#include <stdio.h>

main()
{
    float phy, maths, bio, chem, comp, marks_obtained, percentage;
    printf("Enter marks obtained in Physics : ");
    scanf("%f", &phy);
    printf("Enter marks obtained in Mathematics : ");
    scanf("%f", &maths);
    printf("Enter marks obtained in Biology : ");
    scanf("%f", &bio);
    printf("Enter marks obtained in Chemistry : ");
    scanf("%f", &chem);
    printf("Enter marks obtained in Computer : ");
    scanf("%f", &comp);
    marks_obtained = phy + maths + bio + chem + comp;
    percentage = (marks_obtained / 500) * 100;
    printf("Percentage = %f\n", percentage);
    if (percentage >= 90)
    {
        printf("GRADE A");
    }
    else if (percentage >= 80)
    {
        printf("GRADE B");
    }
    else if (percentage >= 70)
    {
        printf("GRADE C");
    }
    else if (percentage >= 60)
    {
        printf("GRADE D");
    }
    else if (percentage >= 40)
    {
        printf("GRADE E");
    }
    else if (percentage < 40)
    {
        printf("GRADE F");
    }
}