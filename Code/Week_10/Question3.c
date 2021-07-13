#include <stdio.h>
#include <string.h>

enum months
{
    jan,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec,
    NOT_MONTH
} month;

static char *month_out[] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec", "NOT_MONTH"};
static int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

enum months translate(char *);
void check(int, enum months);
void tomorrow(int, enum months);

int main()
{
    int day;
    char mon[4];

    printf("Enter a date (number 3 letter lower case month e.g. 31 jan) \n");
    scanf("%d %s", &day, mon);

    month = translate(mon);

    check(day, month);

    tomorrow(day, month);
}

enum months translate(char *m)
{
    if (strcmp(m, "jan") == 0)
        return jan;
    else if (strcmp(m, "feb") == 0)
        return feb;
    else if (strcmp(m, "mar") == 0)
        return mar;
    else if (strcmp(m, "apr") == 0)
        return apr;
    else if (strcmp(m, "may") == 0)
        return may;
    else if (strcmp(m, "jun") == 0)
        return jun;
    else if (strcmp(m, "jul") == 0)
        return jul;
    else if (strcmp(m, "aug") == 0)
        return aug;
    else if (strcmp(m, "sep") == 0)
        return sep;
    else if (strcmp(m, "oct") == 0)
        return oct;
    else if (strcmp(m, "nov") == 0)
        return nov;
    else if (strcmp(m, "dec") == 0)
        return dec;
    else
        return NOT_MONTH;
}

void check(int day, enum months month_in)
{
    if ((month_in == NOT_MONTH) || (day < 1) || (day > days_in_month[month]))
    {
        printf("Error: Invalid Input %d %s\n", day, month_out[month_in]);
    }
}

void tomorrow(int day, enum months month_in)
{
    if (day < days_in_month[month_in])
        printf("Tomorrow is %d %s\n", day + 1, month_out[month_in]);
    else /* first of new month */
        printf("Tomorrow is 1 %s\n", month_out[month_in + 1]);
}
