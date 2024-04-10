#include <stdio.h>

int main()
{
    float a, b, c;
    printf ("Vnesi vrednosti za stranite na triagolnikot:\n");
    scanf ("%f %f %f", &a, &b, &c);
    float L = a + b + c;
    float S = L/2;
    float P = S * (S - a) * (S - b) * (S - c);
    printf ("Perimetar: %.2f\n", L);
    printf ("Kvadratot na plostinata: %.2f\n", P);
    return 0;
}
