#include<stdio.h>
int main()
{
	int i, n,j;
	printf("Enter the number : ");
	scanf_s("%d", &n);
	for (i =1; i <=n; i++)
	{
		for (j = 1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

//inverted half pyramid
/*
#include<stdio.h>
int main()
{
	int i, n, j;
	printf("Enter the number : ");
	scanf_s("%d", &n);
	for (i = n; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
*/