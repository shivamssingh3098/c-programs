// Write a program to determine whether a student has "passed or failed". To pass, a
// student requires a "total of 40% and at least 33% in each subject". Assume there
// are "three subjects and take the marks as input" from the user.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a student marks for three subjects \n");
    scanf("%d%d%d", &a, &b, &c);

    float totalPercentageOfMarks = 0.0;
    totalPercentageOfMarks = (a + b + c) * 100 / 300;
    printf("Total percentage %f\n", totalPercentageOfMarks);
    if (totalPercentageOfMarks >= 40 && a >= 33 && b >= 33 && c >= 33)
    {
        printf("Student is pass\n");
    }
    else
    {
        printf("Student is fail\n");
    }
}