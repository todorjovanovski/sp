#include <stdio.h>
#include <string.h>
#define MAX 100
#include <math.h>

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();
    // vashiot kod ovde
    FILE * dat = fopen("broevi.txt", "r");

    char c;
    int brojac = 0;

    while((c = fgetc(dat)) != EOF)
    {
        if(c == '\n')
        {
            brojac++;
        }
    }

    fclose(dat);

    FILE * f = fopen("broevi.txt", "r");

    int max, max_br;
    for(int i=0; i<brojac; i++)
    {
        int n;
        fscanf(f, "%d", &n);
        if(n == 0)
        {
            break;
        }
        for(int j=0; j<n; j++)
        {
            int broj;
            fscanf(f, "%d", &broj);
            int naj = broj;
            while(naj >= 10)
            {
                naj /= 10;
            }
            if(j == 0)
            {
                max = naj;
                max_br = broj;
            }
            else
            {
                if(naj > max)
                {
                    max = naj;
                    max_br = broj;
                }
            }
        }
        printf("%d\n", max_br);
    }
    fclose(f);
    return 0;
}
