#include <stdio.h>

int main()
{
    int vrednost, izbor;

    printf("Vnesi pocetna vrednost: ");
    scanf("%d", &vrednost);

    do
    {
        do
        {
            printf("\nMeni:\n");
            printf("1 - zgolemi\n");
            printf("2 - namali\n");
            printf("3 - dupliraj\n");
            printf("0 - kraj\n");
            printf("izbor : ");
            scanf("%d", &izbor);
        } while((izbor < 0) || (izbor > 3));
        switch(izbor)
        {
            case 1: vrednost++; break;
            case 2: vrednost--; break;
            case 3: vrednost *= 2; break;
            case 0: printf("Kraj."); break;
            default: printf("Nevaliden izbor."); break;
        }
        printf("\nVrednost = %d", vrednost);
    } while (izbor != 0);

    return 0;
}
