#include <stdio.h>

int main()
{
    int poeni, ocena = 0;
    char znak;
    printf("Vnesi poeni: ");
    scanf("%d", &poeni);

    if (poeni < 0 || poeni > 100)
    {
        printf("Vnesi validen broj na poeni!\n");
        return main();
    }
    else
    {
        if (poeni > 90)
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

        int pc = poeni % 10;
        if (ocena != 5)
        {
            if (pc >= 1 && pc <= 3)
                znak = '-';
            else if(ocena != 10 && (pc >= 8 || pc == 0))
                znak = '+';
        }
    }
    printf("Ocena: %d%c", ocena, znak);

    return 0;
}
