#include <stdio.h>

int main()
{
    int broj;
    printf("Vnesi tricifren broj: ");
    scanf("%d", &broj);

    printf("Najznacajnata cifra e: %d\n", broj/100);
    printf("Najmalku znacajnata cifra e: %d\n", broj%10);

    return 0;
}
