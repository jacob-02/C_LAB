/*
Write a Program to convert all characters in a given line from lower case to upper case.

Sample Input:
Enter characters to convert case
I am student of 2nd Semester!
Sample Output:
I AM STUDENT OF 2ND SEMESTER!
*/
#include <stdio.h>

int main()
{
    char ch;
    while ((ch =getchar()) != '\n')
    {
        putchar(toupper(ch));
    }
    printf("\n");
}