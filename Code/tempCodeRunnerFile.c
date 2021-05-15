#include <stdio.h>

int main()
{
    printf("Enter the marks: ");
    int marks;
    scanf("%d", &marks);

    if (marks>80 && marks<=100)
        printf("Grade A\n");
    
    else if (marks>60 && marks<=85)
        printf("Grade B\n");

    else if (marks>40 && marks<=60)
        printf("Grade C\n");

    else if (marks>30 && marks<=40)
        printf("Grade D\n");

    else
        printf("FAIL\n");
        
}