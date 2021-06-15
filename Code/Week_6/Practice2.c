#include <stdio.h>

struct conv
{
    float feet;
    float inch;
} s1, s2;

int main()
{
    printf("Enter the feet and inch 1\n");
    scanf("%f%f", &s1.feet, &s1.inch);

    printf("Enter the feet and inch 2\n");
    scanf("%f%f", &s2.feet, &s2.inch);

    float feet = s1.feet + s2.feet;
    float inches = s1.inch + s2.inch;

    int i = 0;

    while (i == 0)
    {
        if (inches > 12)
        {
            i++;
            inches = inches - 12;
            feet++;
        }
        else
            break;
    }

    printf("Sum of distances = %ffeet %finches\n", feet, inches);
}
