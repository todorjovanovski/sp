#include <stdio.h>

int main()
{
    int a, b;

    printf("Vnesi dva broja: \n");
    scanf("%d %d", &a, &b);

    printf("Zbir: %d\n", a + b);
    printf("Razlika: %d\n", a - b);
    printf("Proizvod: %d\n", a * b);
    printf("Kolicnik: %d\n", a / b);
    printf("Ostatok pri delenje: %d", a % b);

    return 0;
}
