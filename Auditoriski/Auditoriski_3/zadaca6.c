#include <stdio.h>

int main()
{
    float cena, kamata, rata, vkupno;
    int broj_rati;

    printf("Vnesi pocetna cena na proizvodot: ");
    scanf("%f", &cena);
    printf("Vnesi kamata (vo procenti):  ");
    scanf("%f", &kamata);
    printf("Vnesi broj na rati: ");
    scanf("%d", &broj_rati);

    vkupno = cena * (1 + kamata/100);
    rata = vkupno/broj_rati;

    printf("Vkupnata cena ke iznesuva: %.3f\n", vkupno);
    printf("Edna rata ke iznesuva: %.3f", rata);

    return 0;
}
