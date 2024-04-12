#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int n;

int max(int arr[])
{
    int a = 0;
    a = arr[0];
    for (int i = 0; i < n; i++)
    {
        
        if (a < arr[i])
        {
            a = arr[i];
        }
    }
    return a;
}

int min(int arr[])
{
    int a = 0;
    a = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (a > arr[i])
        {
            a = arr[i];
        }
    }
    return a;
}

int main()
{
    int arr[1000000];
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("%d %d", min(arr), max(arr));

    return 0;
}