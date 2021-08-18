
// Write a C program using bitwise operators for the following:
// i) check whether specified bit is set or not
// ii) set the specified bit and print the result
// iii) clear the specified bit and print the result 
// Sample Input/Output:
// Enter the number which you want check
// 25
// Input number is 25
// Enter the bit position, starts from zero
// 2
// bit is not set
// Enter the bit position, which you want to set
// 4
// set : 16
// The number after set is 25
// Enter the bit position, which bit you want to clear
// 3
// set : 0
// The number after clear is 17


// C Program to demonstrate use of bitwise operators

#include <stdio.h>

// int main()
// {
// 	int n, k, num;
// 	printf("Enter the number\n");
// 	scanf("%d", &num);
// 	printf("Enter the bit position which you want to clear\n");
// 	scanf("%d", &k);
// 	printf("set : ");
// 	scanf("%d", &n);
	
// 	num = (num & (~(1 << (k - n))));
// 	printf("The number after clear is %d\n", num);
// }


// int  main()
// {
// 	int n, k, num;
// 	printf("Enter the number\n");
// 	scanf("%d", &num);
// 	printf("Enter the bit position which you want to set\n");
// 	scanf("%d", &k);
// 	printf("set : ");
// 	scanf("%d", &n);
	
// 	num = (num | (1 << (k - n)));
// 	printf("The number after set is %d\n", num);
// }

int main()
{
	int num, n;
	printf("Enter the number that you want to check\n");
	scanf("%d", &num);
	printf("Input number is %d\n", num);
	printf("Enter the bit position, starts from zero\n");
	scanf("%d", &n);
	
	if (num & (1<<n))
		printf("Bit is set\n");
	
	else
		printf("Bit is not set\n");
}
