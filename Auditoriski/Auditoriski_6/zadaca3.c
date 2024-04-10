#include <stdio.h>

int main()
{
    int n, scalar = 0;
    printf("Golemina na niza: ");
    scanf("%d", &n);

    int niza1[n], niza2[n];
    printf("Prva niza:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza1[i]);
    }
    printf("\nVtora niza:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza2[i]);
    }
    for(int i=0; i<n; i++)
    {
        scalar += niza1[i] * niza2[i];
    }
    printf("\nSkalaren proizvod: %d", scalar);

    return 0;
}
