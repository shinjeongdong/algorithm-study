#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


int main() {
	
	char a[100];
	char b[100];
	int j = 0;

	scanf("%s", a);


	for (int i = (int)(strlen(a) -1); i >= 0 ; i--)
	{
		b[j] = a[i];
		j++;

	}
	b[j] = '\0';


	if (!strcmp(a,b))
	{
		printf("%d", 1);
	}
	else
	{
		printf("%d", 0);
	}
	return 0;
}