#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int pow(int a, int b)
{
	int num = 1;
	for (int i = 1; i <= b; i++)
	{
		num = num * a;
	}
	return num;
}
int main()
{
	int n;
	long long i;
	scanf("%d", &n);
	long long left = pow(10, n-1);
	long long right = pow(10, n );
	for (i = left; i < right; i++)
	{
		long long s = i;
		long long sum = 0;
		while (s > 9)
		{
			int a = s % 10;
			s = s / 10;
			sum += pow(a, n);
		}
		sum += pow(s, n);
		if (sum == i)
		{
			printf("%d\n",sum);
		}
	}
}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//
//	int i,j;
//	for (i = pow(10, n); i < pow(10, n + 1); i++)
//	{
//		int s = i;
//		int sum = 0;
//		int a[8] = { 0 };
//		for (j = 0; j < n; j++)
//		{
//			a[j] = s % 10;
//			s = s / 10;
//			sum += pow(a[j], n);
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//
//		
//	}
//
//}
