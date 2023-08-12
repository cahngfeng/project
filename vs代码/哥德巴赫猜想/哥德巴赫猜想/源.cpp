#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int fact(int n)
{
	int i;
	int flag = 0;
	if (n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		for (i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				flag=1;
			}
		}
		if (flag == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

}
int main()
{
	int n;
	int i;
	int count = 0;
	scanf("%d", &n);
	for (i = 3; i < n / 2; i++)
	{
		if (fact(i) == 1 && fact(n - i) == 1)
		{
			printf("%d = %d + %d", n, i, n - i);
			break;
		}
	}
}