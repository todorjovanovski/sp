#include <stdio.h>

int NZD(int m, int n)
{
    if(n == 0)
    {
        return m;
    }
    return NZD(n, m%n);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int nzd = NZD(a, b);

    printf("%d", nzd);

    return 0;
}
