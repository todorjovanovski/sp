#include <stdio.h>
#include <string.h>
int dolzina(char * str)
{
    int brojac = 0;
    for(int i=1; str[i]!='\0'; i++)
    {
        brojac++;
    }
    return brojac;
}

int dolzina_rekurzija(char * str)
{
    if(*str == '\0')
    {
        return 0;
    }
    return 1 + dolzina_rekurzija(str+1);
}

int main()
{
    char niza[100];
    fgets(niza, sizeof(niza), stdin);

    printf("Dolzina na stringot: %d", dolzina(niza));

    return 0;
}
