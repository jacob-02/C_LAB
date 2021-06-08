#include <stdio.h>
#include "Question4_repeat.c"
int main()
{
    char s1[100], s2[100];
    int n;

    printf("enter the 1st string\n");
    scanf("%s", s1);

    printf("enter the 2nd string\n");
    scanf("%s", s2);

    printf("Enter the number of times you want to append\n");
    scanf("%d", &n);

    printf("Concatenated string is %s\n", my_strncat(s1, s2, n));
    return 0;
}
