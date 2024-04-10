#include <stdio.h>
#include <string.h>
#include <ctype.h>

void promeni(char * str)
{
    int counter = 0;
    for(int i=0; i<strlen(str); i++)
    {
        if(isalpha(str[i]))
        {
            if(islower(str[i]))
            {
                str[counter] = toupper(str[i]);
            }
            else
            {
                str[counter] = tolower(str[i]);
            }
            counter++;
        }
    }
    str[counter] = '\0';
}
int main()
{
    char str[100];
    gets(str);

    promeni(str);
    puts(str);

    return 0;
}
