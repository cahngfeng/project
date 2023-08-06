#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int n, i = 0,j=0,k, max;
    int a[3];
    scanf("%d", &n);
    int b, c;
    for (i = 0; i < 3; i++)
    {
        a[i] = n % 10;
        n = n / 10;
    }
    for (i = 0; i < 3 ; i++)
    {
        max = a[i];
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                k = j;
            }
        }
        a[k] = a[i];
        a[i] = max;
    }
    printf("%d %d %d", a[0], a[1], a[2]);
}