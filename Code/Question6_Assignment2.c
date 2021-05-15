/*
Write a program to validate a given date and find the next date

Sample input:
Enter the date 12
Enter the month 12
Enter the year 2000
Sample Output:
Date is valid & next date is: 13/12/2000
Sample input:
Enter the date 1
Enter the month 13
Enter the year 2000
Sample Output:
Month is invalid
*/

#include <stdio.h>
int main()
{
    int dd;
    int mm;
    int yy;
    int max1;

    printf("Enter the date\n");
    scanf("%d", &dd);
    printf("Enter the month\n");
    scanf("%d", &mm);
    printf("Enter the year\n");
    scanf("%d", &yy);

    if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
        max1 = 31;
    else if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
        max1 = 30;
    else if (yy % 4 == 0 && yy % 100 != 0 || yy % 400 == 0)
        max1 = 29;
    else
        max1 = 28;

    if (mm < 1 || mm > 12)
        printf("The month is invalid\n");
    else if (dd < 1 || dd > max1)
        printf("The date is invalid\n");
    else if (dd == max1 && mm != 12)
    {
        dd = 1;
        mm = mm + 1;
        printf("Date is valid and next date is :%d/%d/%d\n", dd, mm, yy);
    }
    else if (dd == max1 && mm == 12)
    {
        dd = 1;
        mm = 1;
        yy = yy + 1;
        printf("Date is valid and next date is :%d/%d/%d\n", dd, mm, yy);
    }
    else
    {
        dd = dd + 1;
        printf("Date is valid and next date is :%d/%d/%d\n", dd, mm, yy);
    }
}