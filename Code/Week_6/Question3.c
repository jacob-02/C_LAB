#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
} s1, s2;

int main()
{
    printf("\n------------------Date 1------------------\n");
    printf("Enter the day\n");
    scanf("%d", &s1.day);
    printf("Enter the month\n");
    scanf("%d", &s1.month);
    printf("Enter the year\n");
    scanf("%d", &s1.year);

    printf("\n------------------Date 2------------------\n");
    printf("Enter the day\n");
    scanf("%d", &s2.day);
    printf("Enter the month\n");
    scanf("%d", &s2.month);
    printf("Enter the year\n");
    scanf("%d", &s2.year);

    if (s1.year == s2.year)
    {
        if (s1.month == s2.month)
        {
            if (s1.day == s2.day)
            {
                printf("The dates are the same\n");
            }
            else if (s1.day < s2.day)
            {
                printf("Date 1 precedes Date 2\n");
            }
            else
                printf("Date 2 precedes Date 1\n");
        }
        else if (s1.month < s2.month)
        {
            printf("Date 1 precedes Date 2\n");
        }
        else
            printf("Date 2 precedes Date 1\n");
    }
    else if (s1.year < s2.year)
    {
        printf("Date 1 precedes Date 2\n");
    }
    else
        printf("Date 2 precedes Date 1\n");
}