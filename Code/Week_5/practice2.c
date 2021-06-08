#include <stdio.h>
#include "practice2_tcheck.c"
int strend(char *s, char *t);
int main()
{
    char s[50], t[50];
    int result;
    printf("Enter the string 1: \n");
    scanf("%[^\n]s", s);
    printf("Enter the string 2: \n");
    scanf("%s", t);
    result = strend(s, t);
    printf("Result is: %d\n", result);
    return 0;
}