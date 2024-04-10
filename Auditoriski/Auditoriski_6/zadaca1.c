#include <stdio.h>

int main()
{
    int n, par = 0, nepar = 0, sumpar = 0, sumnepar = 0;
    printf("Vnesi golemina na niza: ");
    scanf("%d", &n);

    int niza[n];
    for(int i=0; i<n; i++)
    {
        printf("[%d] ", i);
        scanf("%d", &niza[i]);
    }

    for(int i=0; i<n; i++)
    {
        if (niza[i]%2 == 0)
        {
            sumpar += niza[i];
            par++;
        }
        else
        {
            sumnepar += niza[i];
            nepar++;
        }
    }
    printf("Suma na parni: %d\nSuma na neparni: %d\nOdnos: %.2f", sumpar, sumnepar, (float)par/nepar);

    return 0;
}
