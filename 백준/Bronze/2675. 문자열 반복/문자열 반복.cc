#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	int t, r;
	
	char s[20];
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %s", &r, s);
		
		int l = strlen(s);


		for (int k = 0; k < l; k++)
		{
			
			for (int j = 0; j < r; j++)
			{
				printf("%c", s[k]);
			}
		}
		printf("\n");


	}




	return 0;
}