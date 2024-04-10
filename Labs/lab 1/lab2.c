#include <stdio.h>

int main()
{
    int suma;

    printf("Vnesi suma na pari: ");
    scanf("%d", &suma);

    printf("%d * 5000\n", suma/5000);
    suma %= 5000;
    printf("%d * 1000\n", suma/1000);
    suma %= 1000;
    printf("%d * 500\n", suma/500);
    suma %= 500;
    printf("%d * 100\n", suma/100);
    suma %= 100;
    printf("%d * 50\n", suma/50);
    suma %= 50;
    printf("%d * 10\n", suma/10);
    suma %=10;
    printf("%d * 5\n", suma/5);
    suma %= 5;
    printf("%d * 2\n", suma/2);
    suma %=2;
    printf("%d * 1\n", suma);

    return 0;

}
