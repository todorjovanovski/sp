#include <stdio.h>

int main()
{
    char op;
    float broj1, broj2, rezultat = 0;

    printf("Broj operator broj:\n");
    scanf("%f %c %f", &broj1, &op, &broj2);

    switch(op)
    {
        case '+':
            rezultat = broj1 + broj2;
            break;
        case '-':
            rezultat = broj1 - broj2;
            break;
        case '*':
            rezultat = broj1 * broj2;
            break;
        case '/':
            if (broj2 == 0)
            {
                printf("So 0 ne se deli.");
            }
            else
            {
                rezultat = broj1 / broj2;
            }
            break;
        default:
            printf("Nepoznat operator.");
            break;
    }
    if (rezultat)
        printf("%.2f %c %.2f = %.2f", broj1, op, broj2, rezultat);

    return 0;
}
