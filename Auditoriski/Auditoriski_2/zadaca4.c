#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Vrednosti za a, b, c:\n");
    scanf("%d %d %d", &a, &b, &c);

    float AS = (a+b+c)/3.0;
    printf("Aritmeticka sredina na broevite %d, %d i %d e: %.2f ", a, b, c, AS);
    return 0;
}
