#include <stdio.h>

int main()
{
    int smetka;
    printf("Iznos na transakciska smetka: ");
    scanf("%d", &smetka);

    int broj, sum = 0;
    printf("Vnesi 5 transakcii:\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &broj);
        sum += broj;
    }
    printf("%d", (smetka+sum)>0);

    return 0;
}
