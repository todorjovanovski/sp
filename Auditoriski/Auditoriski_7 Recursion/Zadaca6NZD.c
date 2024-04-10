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
    int n, niza[100];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    int nzd = NZD(niza[0], niza[1]);
    for(int i=2; i<n; i++)
    {
        nzd = NZD(nzd, niza[i]);
    }
    printf("NZD na nizata e: %d", nzd);

    return 0;
}
