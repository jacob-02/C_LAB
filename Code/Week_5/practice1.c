#include <stdio.h>
#include "practice1_counting.c"

int main()
{
    char s[20];
    printf("Enter the string: \n");
    scanf("%[^\n]s", s);
    countchar(s);
    return 0;
}