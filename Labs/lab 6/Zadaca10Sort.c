#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);

    int niza[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    scanf("%d", &k);

    for(int i=0; i<n; i++)
    {
        if(niza[i] >= k)
        {
            for(int j=i+1; j<n; j++)
            {
                if(niza[j] < k)
                {
                    int tmp = niza[j];
                    for(int k=j; k>i; k--)
                    {
                        niza[k] = niza[k-1];
                    }
                    niza[i] = tmp;
                    break;
                }
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}
