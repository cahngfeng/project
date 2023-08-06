#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int prime(int p);
void Goldbach(int n);
int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime(int p)
{
    int i, flag = 1;
    if (p == 1)
    {
        return 0;
    }
    else if (p == 2)
    {
        return 1;
    }
    else
    {
        for (i = 2; i <= sqrt(p); i++)
        {
            if (p % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
void Goldbach(int n)
{
    if (prime(n) == 1)
    {
        for (int a = 3; a < n / 2; a += 2)
        {
            if (prime(n - a) == 1 && prime(a) == 1)
            {
                printf("%d=%d+%d", n, a, n - a);
                break;
            }
        }
    }
}
    































































//#include <stdio.h>
//#define MAXN 20
//
//void CountOff(int n, int m, int out[]);
//
//int main()
//{
//    int out[MAXN], n, m;
//    int i;
//
//    scanf("%d %d", &n, &m);
//    CountOff(n, m, out);
//    for (i = 0; i < n; i++)
//        printf("%d ", out[i]);
//    printf("\n");
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void CountOff(int n, int m, int out[])
//{
//    int i = 0, j = 0, x = 0, y = 0, z = 0, b = 1;
//    int a[] = {0};
//    z = n - 1;
//    for (i = 0; i < n; i++)
//    {
//        a[i] = i + 1;
//    }
//    while (1)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (a[j] != 0)
//            {
//
//                if (b == m)
//                {
//
//                    a[j] = 0;
//                    out[x] = j + 1;
//                    b = 0;
//                    x++;
//                }b++;
//            }
//
//
//        }
//        if (x ==n)
//        {
//            break;
//        }
//    }
//}