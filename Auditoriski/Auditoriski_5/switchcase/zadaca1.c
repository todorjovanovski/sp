#include <stdio.h>

int main()
{
    char znak;
    printf("Vnesi znak: ");
    scanf("%c", &znak);

    switch (znak)
    {
        case 'a' : case 'A':
        case 'e' : case 'E':
        case 'i' : case 'I':
        case 'o' : case 'O':
        case 'u' : case 'U':
            printf("Vnesena e samoglaskata: %c", znak);
            break;

        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            printf("Vnesena e cifrata: %c", znak);
            break;

        default: printf("Vnesen e znakot: %c", znak);
    }

    return 0;
}
