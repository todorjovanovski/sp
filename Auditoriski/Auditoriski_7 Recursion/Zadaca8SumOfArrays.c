#include <stdio.h>

int sum1(int niza[], int n)
{
    if(n == 0)
    {
        return niza[0];
    }
    else
    {
        return niza[n] + sum1(niza, n - 1);
    }
}

int sum2(int niza[], int n, int i)
{
    if(i == n)
    {
        return 0;
    }
    else
    {
        return niza[i] + sum2(niza, n, i+1);
    }
}

int main()
{
    int n, niza[100];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    printf("Sum1: %d\n", sum1(niza, n - 1));
    printf("Sum2: %d", sum2(niza, n, 0));

    return 0;
}
