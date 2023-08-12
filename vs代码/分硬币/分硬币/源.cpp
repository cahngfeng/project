#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	int count = 0;
	scanf("%d", &n);
	int i, j;
	int a, b, c;
	a = n / 5;
	for (i = a; i > 0; i--)
	{
		b = (n - i * 5) / 2; 
		for (j = b; j > 0; j--)
		{
			c = (n - i * 5 - j * 2);
			if (c > 0)
			{
			    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, c,i+j+c);
				count++;
			}

		}
	}
	printf("count=%d", count);
}