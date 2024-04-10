#include <stdio.h>
#include <string.h>
#include <ctype.h>

int tri_isti(char * str)
{
    int isti = 0;
    for(int i=0; i<strlen(str)-1; i++)
    {
        isti = 1;
        for(int j=i+1; j<strlen(str); j++)
        {
            if(tolower(str[i]) == tolower(str[j]))
            {
                isti++;
            }
        }
        if(isti > 2)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    FILE * dat;

    if((dat = fopen("zborovi.txt", "r")) == NULL)
    {
        printf("Datotekata ne e uspesno otvorena.");
        return 0;
    }

    char red[21];
    int zborovi = 0;
    while(fgets(red,21,dat) != NULL)
    {
        if(tri_isti(red))
        {
            puts(red);
            zborovi++;
        }
    }

    printf("Vkupno zborovi so povekje od 3 isti bukvi: %d", zborovi);
    fclose(dat);

    return 0;
}
