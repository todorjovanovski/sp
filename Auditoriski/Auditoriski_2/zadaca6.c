#include <stdio.h>
#define PI 3.14

int main()
{
    float radius;
    scanf("%f", &radius);

    float perimetar = 2*radius*PI;
    float plostina = radius*radius*PI;

    printf("Perimetar: %.2f\nPlostina: %.2f", perimetar, plostina);

    return 0;
}
