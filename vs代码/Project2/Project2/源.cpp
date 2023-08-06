#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int fact(int n)
{
	int i, a = 1;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
		{
			a = 0;
		}
	}
	if (a == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i,n,sum,flag=0;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		sum = pow(2, i) - 1;
		if (fact(sum) == 1)
		{
			printf("%d\n", sum);
			flag = 1;
		}

	}
	if (flag == 0)
	{
		printf("None\n");
	}
}