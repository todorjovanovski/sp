#include <stdio.h>

void podniza(int * a, int n, int * pocetok, int * dolzina)
{
    int currpocetok, currdolzina;
    *pocetok = 0;
    *dolzina = 1;
    for(int i=0; i<n-1; i++)
    {
        currpocetok = i;
        currdolzina = 1;
        while(a[i]<a[i+1])
        {
            currdolzina++;
            i++;
            if(i == n-1)
            {
                break;
            }
        }
        if(currdolzina > *dolzina)
        {
            *pocetok = currpocetok;
            *dolzina = currdolzina;
        }

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

    int pocetok, dolzina;
    podniza(niza, n, &pocetok, &dolzina);
    printf("Pocetok: %d\nDolzina: %d", pocetok, dolzina);

    return 0;
}
