#include <stdio.h>

int NZS(int n, int m, int max)
{
    if(max%n == 0 && max%m == 0)
    {
        return max;
    }
    return NZS(n, m, max+1);
}

int main()
{
    int n, niza[100], max = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
        if(niza[i] > max)
        {
            max = niza[i];
        }
    }

    int nzs = NZS(niza[0], niza[1], max);
    for(int i=2; i<n; i++)
    {
        nzs = NZS(nzs, niza[i], max);
    }
    printf("NZS na nizata e: %d", nzs);

    return 0;
}
