#include <stdio.h>
#include "Question_2_client2.c"


int factorial(int n);

int main()
{
    printf("Enter the value of n and r in nCr \n");
    int n, r;
    scanf("%d%d", &n, &r);

    int answer = C(n, r);

    printf("The value of nCr is %d\n", answer);    
}
