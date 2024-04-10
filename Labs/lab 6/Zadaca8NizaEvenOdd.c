#include <stdio.h>

int main()
{
    int n, niza[100];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(niza[i]%2 == 0)
        {
            niza[i] += 1;
        }
        else
        {
            niza[i] -= 1;
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}
