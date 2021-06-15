#include <stdio.h>

struct complex
{
    int real, imag;
} s1, s2;

int main()
{
    printf("Enter the real and complex part of the first number\n");
    scanf("%d%d", &s1.real, &s1.imag);

    printf("Enter the real and complex part of the second number\n");
    scanf("%d%d", &s2.real, &s2.imag);

    int real = s1.real + s2.real;
    int imag = s1.imag + s2.imag;

    printf("Sum = %d+%di\n", real, imag);

    int real1 = s1.real - s2.real;
    int imag1 = s1.imag - s2.imag;

    if (imag1 >= 0)
        printf("Difference = %d+%di\n", real1, imag1);

    else
        printf("Difference = %d%di\n", real1, imag1);
}
