#include <stdio.h>
#include <string.h>
#include <ctype.h>

void letterFrequency(char * text, char letter)
{
    int upper = 0;
    int lower = 0;
    for(int i=0; i<strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            if(text[i] == tolower(letter))
            {
                lower++;
            }
            else if(text[i] == toupper(letter))
            {
                upper++;
            }
        }
    }

    printf("%c -> %.3f%%\n%c -> %.3f%%", tolower(letter), (float)lower/strlen(text)*100, toupper(letter), (float)upper/strlen(text)*100);

}

int main()
{
    char text[1000], c;
    fgets(text, sizeof(text), stdin);
    scanf("%c", &c);

    letterFrequency(text, c);

    return 0;
}
