#include <stdio.h>
#include "Question_2_client.c"

int C(int n, int r)
{
    return factorial(n)/(factorial(n-r) * factorial(r));
}