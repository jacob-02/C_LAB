#include <stdio.h>
int main()
{
    FILE *p;
    int n;
    char str[100], name[20] = "file1.txt", str1;
    p = fopen(name, "w");
    printf("Enter the number of lines to be written\n");
    scanf("%d", &n);
    printf("\nThe lines are \n");
    for (int i = 0; i < n + 1; i++)
    {
        fgets(str, sizeof(str), stdin);
        fputs(str, p);
    }
    fclose(p);
    p = fopen(name, "r");
    printf("\nThe contents of the file %s is:\n", name);
    str1 = fgetc(p);
    while (str1 != EOF)
    {
        printf("%c", str1);
        str1 = fgetc(p);
    }
    fclose(p);
}