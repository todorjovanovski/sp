#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE * dat = fopen("dat.txt", "r");
    char c;
    int br_isti_bukvi = 0, br_pojavuvanja = 0, i = 0;
    char zbor[100];
    scanf("%s", zbor);

    while((c = getc(dat)) != EOF)
    {
        if(isdigit(c))
        {
            if(c==zbor[i++])
            {
                br_isti_bukvi++;
            }
            else
            {
                if(br_isti_bukvi == strlen(zbor))
                {
                    br_pojavuvanja++;
                }
                br_isti_bukvi = 0;
                i = 0;
            }
        }
        else
        {
            if(br_isti_bukvi == strlen(zbor))
            {
                br_pojavuvanja++;
            }
            br_isti_bukvi = 0;
            i = 0;
        }
    }
    printf("Zborot %s se pojavuva %d pati vo datotekata.", zbor, br_pojavuvanja);
    fclose(dat);

    return 0;
}
