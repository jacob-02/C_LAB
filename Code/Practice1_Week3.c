#include <stdio.h>
void fibonacci(int range)
{
    int a = 0, b = 1, c;
    while (a <= range)
    {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int range;
    printf("Enter the range : \n");
    scanf("%d", &range);
    printf("The fibonacci series is : \n");
    fibonacci(range);
    return 0;
}
