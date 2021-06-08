#include <stdio.h>
#include "Question2_replace.c"

int main()
{
    char str1[20], c1, c2;
    printf("Enter a string\n");
    scanf("%[^\n]s",str1);
    printf("Enter the character to replace\n");
    fflush(stdin);
    c1=getchar();
    fflush(stdin);
    printf("Enter the character to be replaced with\n");
    c2=getchar();
    printf("Before replace %s\n", str1);    
    replacechar(str1,c1,c2);
    printf("After replace %s\n", str1);
    return 0;
}
