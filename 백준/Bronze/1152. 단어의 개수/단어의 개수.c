#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	char str[1000000] ;
	int count = 1;
	gets(str);

	if (str[0] == ' ')
	{
		count--;
	}
	for (int i = 0; i < strlen(str); i++)
	{
		
		if (str[i] == ' ' && str[i+1] != '\0')
		{
			count++;
		}
	}

	printf("%d", count);
	return 0;
}