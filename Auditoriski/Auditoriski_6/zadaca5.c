#include <stdio.h>

int main()
{
    int n, temp, m, i;

    printf("Golemina na niza: ");
    scanf("%d", &n);

    int niza[n];
    for (i=0; i<n; i++)
    {
        printf("[%d] ", i);
        scanf("%d", &niza[i]);
    }
    for (i=0; i<n; i++)
    {
        printf("%d ", niza[i]);
    }

    printf("\nBroj na pomestuvanja na desno: ");
    scanf("%d", &m);
    for (i=0; i<m; i++)
    {
        temp = niza[n-1];
        for (int i=n-1; i>0; i--)
        {
            niza[i] = niza[i-1];
        }
        niza[0] = temp;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}
