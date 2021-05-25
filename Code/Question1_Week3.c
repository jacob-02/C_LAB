#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number that you want to check if it is a palindrome : ");
    scanf("%d", &n);

    palindrome(n);
}

void palindrome(int n)
{
    int r, q = 0, temp;
    temp = n;
    while(n != 0)
    {
        r = n % 10;
        n = n/10;
        q = q * 10 + r;
    }
    printf("The reverse of the number is : %d\n", q);

    if(temp == q)
        printf("The number is a palindrome\n");
    
    else
        printf("The number is not a palindrome\n");        
}