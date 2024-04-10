#include <stdio.h>

int main()
{
    long int datum;
    int den, mesec;

    printf("Vnesi datum na ragjanje: ");
    scanf("%ld", &datum);

    den = datum/1000000;
    mesec = (datum/10000)%100;

    printf("Den: %02d\nMesec: %02d", den, mesec);

    return 0;
}
