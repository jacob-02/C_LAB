#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fs, *ft;
    int ch;

    if (argc != 3)
    {
        printf("Invalid number of arguments\n");
        return 1;
    }
    fs = fopen(argv[1], "r");

    if (fs == NULL)
    {
        printf("Cannot find the requested file\n");
        return 1;
    }
    ft = fopen("def.txt", "w");

    if (ft == NULL)
    {
        printf("Cannot find the requested file\n");
        return 1;
    }

    while (1)
    {
        ch = fgetc(fs);
        if (feof(fs))
            break;
        fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);
}