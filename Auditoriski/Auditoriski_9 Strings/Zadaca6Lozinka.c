#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validna(char * str)
{
    int bukvi = 0, cifri = 0, spec = 0;
    for(int i=0; i<strlen(str); i++)
    {
        if(isalpha(str[i]))
        {
            bukvi++;
        }
        else if(isdigit(str[i]))
        {
            cifri++;
        }
        else if(!isspace(str[i]))
        {
            spec++;
        }
        if(bukvi && cifri && spec)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char lozinka[100];
    gets(lozinka);
    if(validna(lozinka))
    {
        printf("Validna");
    }
    else
    {
        printf("Nevalidna");
    }
}
