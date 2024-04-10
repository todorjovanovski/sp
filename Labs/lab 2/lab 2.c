#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Vnesi vrednosti za x, y i z:\n");
    scanf("%d %d %d", &x, &y, &z);

    y = ++x && (z+5 || --y);
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    z = z-- || (x>y) && (x>z);
    printf("x = %d, y = %d, z = %d", x, y, z);

    return 0;
}
