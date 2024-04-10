#include <stdio.h>

int main()
{
    float kg, cm;

    printf("Vnesi masa vo kg: ");
    scanf("%f", &kg);
    printf("Vnesi visina vo cm: ");
    scanf("%f", &cm);

    float metri = cm/100;
    float indeks = kg/(metri*metri);

    printf("Indeks na telesna masa: %.2f", indeks);

    return 0;
}
