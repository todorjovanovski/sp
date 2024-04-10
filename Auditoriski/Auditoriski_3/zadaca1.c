#include <stdio.h>

int main()
{
    char c;
    printf("Vnesi znak: ");
    scanf("%c", &c);

    int znak = (c >= 'a' && c <= 'z');
    printf("%d\n", znak);

    if (c >= '0' && c <= '9')
    {
        printf("Znakot e cifra");
    }
    else
    {
        printf("Znakot ne e cifra");
    }
    return 0;
}
