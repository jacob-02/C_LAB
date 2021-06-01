#include <stdio.h>
#include "Question4_power.c"

int main()
{
    int n, pow;
    printf("Enter the number and the power that you want to calculate for :\n");
    scanf("%d%d", &n, &pow);

    int ans = ppow(n, pow);

    printf("The power of %d to %d is : %d\n", n, pow, ans);
}