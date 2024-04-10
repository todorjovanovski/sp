#include <stdio.h>

int main()
{
    int km, c, k, p, v, b, d, m;

    printf("Kilometri do destinacijata: ");
    scanf("%d", &km);

    printf("\nTaksi kompanija 1:\nFiksna cena C za K kilometri\n");
    printf("C: ");
    scanf("%d", &c);
    printf("K: ");
    scanf("%d", &k);
    printf("Doplata za sekoj nareden kilometar\nP: ");
    scanf("%d", &p);

    int taksi1 = c + (km - k) * p;

    printf("\nTaksi kopanija 2:\nVozila koi vozat so brzina V km/m, i naplakja B denari pred pocetokot\n");
    printf("V: ");
    scanf("%d", &v);
    printf("B: ");
    scanf("%d", &b);
    printf("Za sekoj izvozen kilometar uste D denari i dopolnitelno za sekoja minuta M denari\n");
    printf("D: ");
    scanf("%d", &d);
    printf("M: ");
    scanf("%d", &m);

    int taksi2 = b + (km/v) * d + km * m;

    printf("\n%d %d\n", taksi1, taksi2);
    printf("%d", taksi1<=taksi2);

    return 0;
}
