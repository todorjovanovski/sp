#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ne menuvaj ovde
void wf()
{
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#')
    {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wf();
    // vasiot kod pocnuva od ovde
    FILE * dat = fopen("livce.txt", "r");

    int suma, a = 0, space = 0, first = 1;
    char c, code[10], max_code[10];
    float k, max_k, proizvod = 1;

    fscanf(dat, "%d", &suma);
    while((c = fgetc(dat)) != EOF)
    {
        if(c != '\n')
        {
            code[a] = c;
            a++;
            if(isspace(c))
            {
                ++space;
                if(space == 2)
                {
                    fscanf(dat, "%f", &k);
                    proizvod = proizvod * k;
                    code[a] = '\0';
                }
            }
        }
        else
        {
            if(first == 1)
            {
                first = 0;
                max_k = k;
                strcpy(max_code, code);
            }
            else
            {
                if(k > max_k)
                {
                    max_k = k;
                    strcpy(max_code, code);
                }
            }
            space = 0;
            a = 0;
        }
    }
    printf("%s%.2f\n%.2f", max_code, max_k, proizvod*suma);

    return 0;

}
