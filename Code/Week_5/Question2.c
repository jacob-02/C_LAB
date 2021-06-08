#include <stdio.h>
#include <stdlib.h>
int main()
{
    char character;
    char element;
    char a[20];

    printf("Enter the string\n");
    scanf("%s", a);
    printf("Enter the character to be replaced\n");
    scanf("%s", &element);
    printf("Enter the character that replaces the above character\n");
    scanf("%s", &character);
    
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == element)
        {
            a[i] = character;
        }
    }
    printf("%s\n", a);
    return 0;
}