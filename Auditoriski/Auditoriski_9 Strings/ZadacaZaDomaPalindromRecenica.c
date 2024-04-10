#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrom(char * str)
{
    int counter = 0;
    for(int i=0; i<strlen(str); i++)
    {
        if(isalpha(str[i]))
        {
            str[counter] = tolower(str[i]);
            counter++;
        }
    }
    str[counter] = '\0';

    for(int i=0; i<counter; i++)
    {
        if(str[i] != str[counter - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[100];
    gets(str);

    if(palindrom(str))
    {
        printf("Palindrom");
    }
    else{
        printf("Ne e palindrom");
    }

    return 0;
}
