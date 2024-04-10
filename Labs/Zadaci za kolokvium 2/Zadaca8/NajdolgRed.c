#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
	// vasiot kod ovde
    FILE * dat = fopen("dat.txt", "r");

    char str[101], max[100], niza[100];
    int first = 1, flag = 1, start, end, max_dolzina = 0;
    while(fgets(str, 101, dat) != NULL)
    {
        flag = 1;
        int count = 0, brojac = 0;
        for(int i=0; i<strlen(str); i++)
        {
            if(isdigit(str[i]))
            {
                if(flag == 1)
                {
                    flag = 0;
                    start = i;
                }
                end = i;
                count++;
            }
            /*if(isdigit(str[j]) && flag2 == 1)
            {
                flag2 = 0;
                end = j;
            }*/
        }

        for(int i=start; i<=end; i++)
        {
            niza[brojac++] = str[i];
        }
        niza[brojac] = '\0';
        if(count > 1)
        {
            if(first == 1)
            {
                first = 0;
                strcpy(max, niza);
            }
            else{
                if(strlen(niza) >= strlen(max))
                {
                    strcpy(max, niza);
                }
            }
        }
    }
    puts(max);

    return 0;

}
