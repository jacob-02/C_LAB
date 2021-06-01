#include <stdio.h>
int prime(int n);

int main()
{
    int n;

    printf("Enter the number that you want to check if it is prime: \n");
    scanf("%d", &n);

    int count = prime(++n);
    
    while (count != 0)
        count = prime(++n);

    printf("The next prime number is %d\n", n);   
}

int prime(int n)
{
    int count = 0;

    if (n == 0 || n == 1)
    {
        printf("It is neither a prime nor composite\n");
        return 2;
    }

    else
        for (int i = 2; i < n; i++)
            if (n % i == 0)
            {
                count = 1;
                break;
            }

    return count;
}