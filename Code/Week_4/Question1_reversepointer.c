#include <stdio.h>

void reversearray(int *p, int n)
{
	int *first = p;
	int *last = p+n-1;

	while(first<last)
	{
		int temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
	printf("Reversed array elements using pointers are: \n");
	for(int i=0; i<n; i++)
		printf("%d ", *p++);
    
    printf("\n");
}