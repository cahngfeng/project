#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_sort(int a[], int sz)
{
	int i;
	int j;
	int tmp = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j <sz-1-i ; j++)
		{
			if (a[j] < a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
int main()
{


	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(a) / sizeof(a[0]);
	bubble_sort(a,sz);
	for (int i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
}