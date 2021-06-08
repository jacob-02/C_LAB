#include <stdio.h>
#include "Question1_palindrome.c"
int main()
{
    char s[20];
    char rev[20];

    printf("Enter the string\n");
    scanf("%s", s);

    reverse_string(s, rev);

    int r = check_equal(s, rev);
    
    if (r == 0)
        printf("%s is a palindrome\n");
    else
        printf("%s is not a palindrome\n");
}