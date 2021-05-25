#include <stdio.h>

int main()
{
    int n1, n2, n3, ans1, ans2;

    printf("Enter the values of the digits\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    ans1 = GCD(n1, n2);
    ans2 = GCD(n3, n2);
    printf("The GCD of %d, %d and %d = %d\n", n1, n2, n3, ans2);
}

int GCD(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a; 
}