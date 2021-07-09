#include <stdio.h>
int main()
{
    FILE *f1, *f2, *f3;

    char ch, file1[20] = "file1.txt", file2[20] = "file2.txt", file3[20] = "file3.txt";
    f1 = fopen(file1, "r");
    f2 = fopen(file2, "r");
    f3 = fopen(file3, "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL)
    {
        printf("File does not exist!\n");
        return 0;
    }
    while ((ch = fgetc(f1)) != EOF)
    {
        fputc(ch, f3);
    }
    fputc('\n', f3);
    while ((ch = fgetc(f2)) != EOF)
    {
        fputc(ch, f3);
    }
    printf("The two files are merged successfully\n");
    fclose(f1);
    fclose(f2);
    fclose(f3);
}