#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void daoxu(char* a)
{
	char tmp = *a;
	int len = strlen(a);
	*a = *(a + len - 1);
	*(a + len - 1) = '\0';
	if (strlen(a + 1) >= 2)
	{
		daoxu(a + 1);
	}
	*(a + len - 1) = tmp;
}
int main()
{
	char a[] = "abcdef";
	daoxu(a);
	printf("%s",a);
}