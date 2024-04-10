#include <stdio.h>

int main()
{
    int poeni, ocena, cifra;
    char znak;
    scanf("%d", &poeni);

    if(poeni >= 0 && poeni <= 100)
    {
        if(poeni > 90)
            ocena = 10;
        else if(poeni > 80)
            ocena = 9;
        else if(poeni > 70)
            ocena = 8;
        else if(poeni > 60)
            ocena = 7;
        else if(poeni > 50)
            ocena = 6;
        else
            ocena = 5;

        cifra = poeni%10;
        if(ocena > 5)
        {
            if(cifra > 7)
                znak = '+';
            else if(cifra > 3)
                znak = ' ';
            else
                znak = '-';
            printf("Ocenka %d%c", ocena, znak);
        }
        else
            printf("Ocenka %d", ocena);

    }
    else
        printf("Nevalidna vrednost za poeni!");


    return 0;
}
