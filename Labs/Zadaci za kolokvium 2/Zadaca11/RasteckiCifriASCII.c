#include <stdio.h>
#include <ctype.h>
#include <string.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    FILE * dat = fopen("input.txt", "r");
    char str[101], redosled[101];

    while(fgets(str, 101, dat) != NULL)
    {
        int count = 0;
        for(int i=0; i<strlen(str); i++)
        {
            if(isdigit(str[i]))
            {
                redosled[count] = str[i];
                count++;
            }
        }
        for(int i=0; i<count-1; i++)
        {
            for(int j=i+1; j<count; j++)
            {
                if(redosled[i] > redosled[j])
                {
                    char temp = redosled[i];
                    redosled[i] = redosled[j];
                    redosled[j] = temp;
                }
            }
        }

        printf("%d:", count);
        for(int i=0; i<count; i++)
        {
            printf("%c", redosled[i]);
        }
        printf("\n");
    }
    return 0;
}
