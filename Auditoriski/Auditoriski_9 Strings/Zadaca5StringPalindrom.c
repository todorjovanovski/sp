#include <stdio.h>
#include <string.h>

int palindrom(char * str)
{
    int n=strlen(str);
    for(int i=0; i<n/2; i++)
    {
        if(str[i] != str[n-1-i])
        {
            return 0;
        }
    }
    return 1;
}

int palindrom_rekurzija(char * str, int pocetok, int kraj)
{
    if(pocetok >= kraj)
    {
        return 1;
    }
    if(str[pocetok] == str[kraj])
    {
        return palindrom_rekurzija(str, pocetok+1, kraj-1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[100];
    gets(str);

    if(palindrom_rekurzija(str, 0, strlen(str) - 1))
    {
        printf("Vneseniot string e palindrom");
    }
    else{
        printf("Vneseniot string ne e palindrom");
    }

    return 0;
}
