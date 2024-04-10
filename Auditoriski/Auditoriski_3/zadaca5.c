#include <stdio.h>

int main()
{
    float cena;
    printf("Cena na proizvodot: ");
    scanf("%f", &cena);

    /*ddv e 18% od pocetnata cena*/
    printf("Vkupna cena na proizvodot: %.2f", cena * 1.18);

    return 0;
}
