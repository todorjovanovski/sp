#include <stdio.h>
#include <ctype.h>
#include <string.h>

void trim_space(char * str)
{
    int pocetok, kraj;
    for(int i=0; i<strlen(str); i++)
    {
        if(!isspace(str[i])){
            pocetok = i;
            break;
        }
    }
    for(int i=strlen(str)-1; i>=0; i--)
    {
        if(!isspace(str[i])){
            kraj = i;
            break;
        }
    }
    int j=0;
    for(int i=pocetok; i<=kraj; i++)
    {
        str[j] = str[i];
        j++;
    }
    str[j] = '\0';
}

int main()
{
    char str[100];
    gets(str);

    trim_space(str);

    puts(str);

    return 0;
}
