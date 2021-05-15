

int  main()
{
	int n, k, num;
	printf("Enter the number\n");
	scanf("%d", &num);
	printf("Enter the bit position which you want to set\n");
	scanf("%d", &k);
	printf("set : ");
	scanf("%d", &n);
	
	num = (num | (1 << (k - n)));
	printf("The number after set is %d\n", num);
}


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