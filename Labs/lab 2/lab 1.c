#include <stdio.h>

int main()
{
    int n, p;
    printf("Iznos na pari na transakciska smetka: ");
    scanf("%d", &n);

    printf("Cena na kupen proizvod: ");
    scanf("%d", &p);

    printf("%d", (n-p*1.18)>0);

    return 0;
}
