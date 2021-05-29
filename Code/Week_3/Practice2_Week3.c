#include <stdio.h>
void angles(int a, int b, int c)
{
    int angle = a + b + c;
    if (angle == 180 && a > 0 && b > 0 && c > 0)
        printf("The triangle is valid\n");
    else
        printf("The triangle is invalid\n");
}
int main()
{
    int a, b, c;
    printf("Enter the values of angles of triangle\n");
    scanf("%d%d%d", &a, &b, &c);
    angles(a, b, c);
}