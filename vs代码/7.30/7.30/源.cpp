#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

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

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i++)
    {
        if (prime(i) == 1)
        {
            for (int a = 3; a < i / 2; a += 2)
            {
                if (prime(i - a) == 1 && prime(a) == 1)
                {
                    printf("%d=%d+%d\n", i, a, i - a);
                    break;
                }
            }
        }
    }

    return 0;
}
