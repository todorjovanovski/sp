#include <stdio.h>
#include <string.h>

int main()
{
    FILE * vlezna, * izlezna;
    if((vlezna = fopen("vlezna.txt", "r")) == NULL)
    {
            printf("Datotekata ne e uspesno otvorena.");
            return 0;
    }
    izlezna = fopen("izlezna.txt", "w");

    char red[81];
    while(fgets(red, 81, vlezna) != NULL)
    {
        int dolzina = strlen(red);
        fprintf(izlezna, "%d\n%s", dolzina, red);
    }

    fclose(vlezna);
    fclose(izlezna);

    return 0;
}
