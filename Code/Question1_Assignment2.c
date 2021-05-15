/*
Write a program to calculate the grade of the student according to the specified marks.

Grade A:Marks(>85 and <=100)
Grade B:Marks(>60 and <=85)
Grade C:Marks(>40 and <=60)
Grade D:Marks(>30 and <=40)
Fail: Marks(<30)
Sample Input:
Enter your marks:60
Sample Output:
You got grade C
*/

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
