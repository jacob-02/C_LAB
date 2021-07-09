#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student
{
    int rno;
    char name[20];
} stud_t;

void init_ptr(stud_t *s, stud_t *p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i] = &s[i];
    }
}
void disp(stud_t *p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d %s", p[i]->rno, p[i]->name);
    }
    printf("\n");
}
void bubble_sort_rno(stud_t *s[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j]->rno > s[j + 1]->rno)
            {
                stud_t *temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
void bubble_sort_name(stud_t *s[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (strcmp(s[j]->name, s[j + 1]->name) > 0)
            {
                stud_t *temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
void bubblesort(void (*ptr)(), stud_t *s[], int n)
{
    (*ptr)(s, n);
}

int main()
{
    FILE *fp = fopen("student.csv", "r");
    char a[100];
    char *p;
    stud_t s[100];
    void (*ptr)() = &bubble_sort_rno;
    void (*ptr1)() = &bubble_sort_name;
    int i = 0;
    fgets(a, 100, fp);
    while (fgets(a, 100, fp))
    {
        p = strtok(a, ",");
        s[i].rno = atoi(p);
        p = strtok(NULL, ",");
        strcpy(s[i].name, p);
        ++i;
    }
    int n = i;
    fclose(fp);
    stud_t *ap[100];
    init_ptr(s, ap, n);
    disp(ap, n);
    int op;
    printf("Enter your option\n 1.sort on roll\n 2.sort on name\n 0.exit\n");
    scanf("%d", &op);
    while (op)
    {
        switch (op)
        {
        case 1:
            bubblesort(ptr, ap, n);
            disp(ap, n);
            break;
        case 2:
            bubblesort(ptr1, ap, n);
            disp(ap, n);
            break;
        }
        printf("Enter your option\n 1.sort on roll\n 2.sort on name\n 0.exit\n");
        scanf("%d", &op);
    }
    return 0;
}