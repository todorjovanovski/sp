#include <stdio.h>

int main()
{
    int n, cifra, sum = 0, proizvod = 1, niza[10];
    scanf("%d", &n);
    int i, j;

    if(n>=1000000 && n<=9999999)
    {
        for(i=0; i<7; i++)
        {
            cifra = n%10;
            niza[i] = cifra;
            sum += cifra;
            proizvod *= cifra;
            n = n/10;
        }
        for(j=i-1; j>=0; j--)
        {
            printf("%d\n", niza[j]);
        }
        printf("%d\n%d", sum, proizvod);
    }
    else
        printf("Vneseniot broj ne e 7 cifren!");


    return 0;
}
