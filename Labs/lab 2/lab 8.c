#include <stdio.h>

int main()
{
    char znak[3];
    printf("Vnesi 3 znaci: ");

    for(int i=0; i<3; i++)
    {
        scanf("%c", &znak[i]);
    }

    for(int i=0; i<3; i++)
    {
        if((znak[i]>=65 && znak[i]<=90)||(znak[i]>=97 && znak[i]<=122) || (znak[i]>'0' && znak[i]<'9'))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }

    printf("\n");
    for(int i=0; i<3; i++)
    {
        if((znak[i]>=65 && znak[i]<=90)||(znak[i]>=97 && znak[i]<=122))
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }

    return 0;

}
