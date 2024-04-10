#include <stdio.h>
#include <string.h>

int main()
{
    char niza[100];
    fgets(niza, sizeof(niza), stdin);
    int pozicija, dolzina;
    scanf("%d%d", &pozicija, &dolzina);

    if(pozicija <= strlen(niza) - 1)
    {
        char rezultat[100];
        strncpy(rezultat, niza+pozicija-1, dolzina);
        rezultat[dolzina] = '\0';
        puts(rezultat);
    }
    else
    {
        printf("Nevalidna pozicija.");
    }

    return 0;
}
