#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fact(int n)
{
	if (n == 1||n==0)
	{
		return 1;
	}
	else
	{
		return fact(n - 1) * n;
	}
}
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		printf("%d\n", fact(i));
	}
	
}