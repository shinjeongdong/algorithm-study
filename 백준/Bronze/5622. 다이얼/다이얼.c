#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	char a[15];
	int t = 0;
	scanf("%s", a);


	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 65 && a[i] <= 67)
			t += 3;
		if (a[i] >=  68 && a[i] <= 70)
			t += 4;
		if (a[i] >= 71 && a[i] <= 73)
			t += 5;
		if (a[i] >= 74 && a[i] <= 76)
			t += 6;
		if (a[i] >= 77 && a[i] <= 79)
			t += 7;
		if (a[i] >= 80 && a[i] <= 83)
			t += 8;
		if (a[i] >= 84 && a[i] <= 86)
			t += 9;
		if (a[i] >= 87 && a[i] <= 90)
			t += 10;
	}

	printf("%d", t);			
	

	return 0;
}