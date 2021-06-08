#include <stdio.h>
int length(char arr[])
{
    int k = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        k = k + 1;
    }
    return k;
}
int main()
{
    char a[20], b[20];

    printf("Enter the string\n");
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        int check = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                check = 1;
            }
        }
        if (check == 0)
        {
            b[length(b)] = a[i];
        }
    }
    printf("%s\n", b);
    return 0;
}