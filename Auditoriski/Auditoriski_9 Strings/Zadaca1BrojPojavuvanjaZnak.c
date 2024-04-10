#include <stdio.h>
#include <string.h>
#include <ctype.h>

int izbrojBukva(char * niza, char bukva)
{
    int brojac = 0;
    for(int i=0; i<strlen(niza); i++)
    {
        if(tolower(niza[i]) == tolower(bukva))
        {
            brojac++;
        }
    }
    return brojac;
}

int izbrojBukvaPokazuvac(char * niza, char bukva)
{
    int brojac = 0;
    while(*niza != '\0')
    {
        if(*niza == bukva)
        {
            brojac++;
        }
        *niza++;
    }
    return brojac;
}

int main()
{
    char niza[100];
    fgets(niza, sizeof(niza), stdin);

    char c;
    scanf("%c", &c);

    printf("Broj na pojavuvanja na bukvata %c: %d", c, izbrojBukva(niza, c));

    return 0;
}
