#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = "";
    printf("Enter the string \n");
    scanf("%s", word);
    printf("%s\n", word);

    char temp[] = "";

    for (int j = 0; j < strlen(word); j++)
    {
        word[strlen(word) - j] = word[j];
    }

    printf("The word reversed is %s\n", word);
}