/*
Write a program to implement a Simple Calculator using switch Statement

Sample input:
Enter an operator (+, -, *,): +
Enter two operands: 3 4
Sample Output:
3.0 + 4.0 = 7.0
Sample input:
Enter an operator (+, -, *,): -
Enter two operands: 7 6
Sample Output:
7.0 - 6.0 = 1.0
*/

#include <stdio.h>
    int
    main()
{
    double a, b;
    char oper;
    printf("Choose the operator(+, -, *, /) : ");
    scanf("%c", &oper);

    printf("Enter the two operands\n");
    scanf("%lf%lf", &a, &b);
    switch (oper)
    {
    case '+':
        printf("%lf + %lf = %lf\n", a, b, a + b);
        break;
    case '-':
        printf("%lf - %lf = %lf\n", a, b, a - b);
        break;
    case '*':
        printf("%lf * %lf = %lf\n", a, b, a * b);
        break;
    case '/':
        printf("%lf / %lf = %lf\n", a, b, a / b);
        break;
    default:
        printf("Error! Invalid operator");
    }
}