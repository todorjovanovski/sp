#include <stdio.h>

int main()
{
    int a, b;
    printf("Vnesi dva broja:\n");
    scanf("%d %d", &a, &b);

    printf("Pogolem e brojot: %d", (a>b) ? a : b);

    return 0;
}
