#include <stdio.h>

int ppow(int num, int pow)
{
    if(pow == 0)
        return 1;
    
    else
        return num * ppow(num, pow-1);
}