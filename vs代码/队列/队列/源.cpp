#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i,n,a,x;
	int f = 0;
	int s[100000] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		switch (a)
		{
			case 1:
			{
				scanf("%d", &x);
				s[f] = x;
				f++;
			}
			case 2:
			{
				s[f] = 0;
				f--;
			}
			case 3:
			{
				printf("%d\n", s[0]);
			}
			case 4:
			{
				printf("%d\n", f);
			}
		}

	}
}