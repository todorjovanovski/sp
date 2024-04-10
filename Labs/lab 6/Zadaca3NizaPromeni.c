#include <stdio.h>

void print(int niza[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", niza[i]);
    }
}

int main()
{
    int n, first = 1;
    scanf("%d", &n);

    int niza[n], end = n-1;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }
    print(niza, n);

    printf("\n");
    for(int i=0; i<n/2; i++)
    {
        int temp = niza[i];
        niza[i] = niza[end];
        niza[end] = temp;
        end--;
    }

    print(niza, n);

    printf("\n");
    for(int i=n-1; i>=0; i--)
    {
        if(i%2 != 0)
        {
            for(int j=i; j<n-1; j++)
            {
                niza[j] = niza[j+1];
            }
            n--;
        }
    }

    print(niza, n);

    printf("\n");
    end = n-1;
    for(int i=0; i<n/2; i++)
    {
        int temp = niza[i];
        niza[i] = niza[end];
        niza[end] = temp;
        end--;
    }
    print(niza, n);

    return 0;
}
