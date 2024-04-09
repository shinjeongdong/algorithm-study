#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	int a,b;
	scanf("%d %d",&a,&b); // 321를 123로 만들기

	int c = (a / 100) + (a / 10 % 10 * 10) + (a % 10 * 100);
	
	int d = (b / 100) + (b / 10 % 10 * 10) + (b % 10 * 100);
	
	if (c < d)
	{
		printf("%d", d);
	}
	else
	{
		printf("%d", c);
	}

	return 0;
}