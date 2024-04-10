#include <stdio.h>

int sum_pos(int * niza, int ind, int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(i>=ind)
        {
            sum += *(niza+i);
        }
    }
    return sum;
}

int main()
{
    int niza[100], ind, n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    scanf("%d", &ind);

    printf("%d", sum_pos(niza, ind, n));

    return 0;
}
