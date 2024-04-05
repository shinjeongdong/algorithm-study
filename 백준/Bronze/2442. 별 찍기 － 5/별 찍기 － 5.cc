#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	int a;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		for (int k = a; k >= i + 1; k--)
		{
			printf(" ");
		}


		for (int j = 1; j <= (2*i-1); j++)
		{
			printf("*");

		}printf("\n");
	}

	return 0;
}