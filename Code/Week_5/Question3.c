#include <stdio.h>
#include "Question3_duplicate.c"
int main()
{
    char str[20];
    printf("Enter the string\n");
    scanf("%[^\n]s", str);
    printf("string before removing duplicates is %s\n", str);
    removeduplicates(str);
    printf("string after removing duplicates is %s\n", str);
    return 0;
}