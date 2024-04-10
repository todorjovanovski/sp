#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Vnesi golema bukva: ");
    scanf("%c", &a);

    printf("%c malo se pisuva: %c", a, a + ('a' - 'A'));

    return 0;
}
