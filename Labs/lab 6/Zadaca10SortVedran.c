#include <stdio.h>

int main()
{

    int n,i,k,j,count=0, first = 1;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (a[j] < k)
            {
                a[i] = a[j];
                i++;
                break;
            }

        }

    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }


    return 0;
}
