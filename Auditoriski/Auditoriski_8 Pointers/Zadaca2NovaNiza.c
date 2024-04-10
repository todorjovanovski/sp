#include <stdio.h>

void nova_niza(int * a, int n)
{
    for(int i=0; i<n/2; i++)
    {
        a[i] = a[i] + a[n-1-i];
        a[n-1-i] = a[i];
    }
    if(n%2 != 0)
    {
        a[n/2] *= 2;
    }
}

void print(int * a, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
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

    nova_niza(niza, n);
    print(niza, n);

    return 0;
}
