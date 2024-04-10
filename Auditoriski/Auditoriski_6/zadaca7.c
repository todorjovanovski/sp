#include <stdio.h>

int main()
{
    int n, izbrisani;
    printf("Golemina na niza: ");
    scanf("%d", &n);

    int niza[n];
    for (int i=0; i<n; i++)
    {
        printf("[%d] ", i);
        scanf("%d", &niza[i]);
    }
    for (int i=0; i<n; i++)
    {
        printf("%d ", niza[i]);
    }

    for (int i=0; i<n-izbrisani; i++)
    {
        for (int j=i+1; j<n-izbrisani; j++)
        {
            if(niza[i] == niza[j])
            {
                for(int k=j; k<n-izbrisani; k++)
                {
                    niza[k] = niza[k+1];
                }
                izbrisani++;
                --j;
            }
        }
    }
    n -= izbrisani;

    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}
