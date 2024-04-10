#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Vnesi vrednosti za x, y i z:\n");
    scanf("%d %d %d", &x, &y, &z);

    printf("%d\n", ++x - --y + z++ + (x>z));

    printf("%d\n", ++x - --y + z++ + x>z);

    return 0;
}
