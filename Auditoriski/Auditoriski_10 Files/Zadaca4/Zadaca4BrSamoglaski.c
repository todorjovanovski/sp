#include <stdio.h>
#include <ctype.h>

int samoglaska(char c)
{
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    }
    else return 0;
}

int main()
{
    FILE * dat;
    if((dat = fopen("SP_primer.txt", "r")) == NULL)
    {
        printf("Datotekata ne e uspesno otvorena.");
        return 0;
    }

    int samoglaski = 0, vkupno_samoglaski = 0, redovi = 0;
    char c;
    while((c = fgetc(dat)) != EOF)
    {
        if(samoglaska(c))
        {
            vkupno_samoglaski++;
            samoglaski++;
        }
        if(c == '\n')
        {
            if(samoglaski>10)
            {
                redovi++;
            }
            samoglaski = 0;
        }
    }
    if(samoglaski>10)
    {
        redovi++;
    }

    printf("Vkupno %d reda imaat povekje od 10 samoglaski.\n", redovi);
    printf("Vo datotekata ima vkupno %d samoglaski.", vkupno_samoglaski);

    fclose(dat);

    return 0;
}
