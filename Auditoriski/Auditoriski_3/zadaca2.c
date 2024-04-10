#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Vnesi vrednosti za x i y: ");
    scanf("%d %d", &x, &y);

    z = x++ + --y + (x < y);

    printf("z = %d", z);

    return 0;
}
