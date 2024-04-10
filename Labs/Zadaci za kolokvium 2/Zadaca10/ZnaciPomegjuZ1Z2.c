#include <stdio.h>
#include <string.h>

void write()
{
    FILE * dat = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#')
    {
        fputc(c, dat);
    }
    fclose(dat);
}

int main()
{
    write();
    FILE * dat = fopen("podatoci.txt", "r");
    char empty, z1, z2;
    scanf("%c%c%c", &empty, &z1, &z2);

    char str[81];
    while(fgets(str, 81, dat) != NULL)
    {
        for(int i=0; i<strlen(str); i++)
        {
            //printf("%c ", str[i]);
            if(str[i] == z1)
            {
                while(str[i+1] != z2)
                {
                    printf("%c", str[i+1]);
                    i++;
                }
                break;
            }
        }
        printf("\n");
    }


    fclose(dat);
}
