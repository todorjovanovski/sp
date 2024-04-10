#include <stdio.h>
#include <ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();

    int mali = 0, golemi = 0, vkupno = 0;
    FILE *f = fopen("text.txt", "r");
    char c;
    while((c = getc(f)) != EOF){
        if(isalpha(c))
        {
            if(islower(c))
            {
                mali++;
            }
            else{
                golemi++;
            }
            vkupno++;
        }
    }

    printf("%.4f\n%.4f", (float)golemi/vkupno, (float)mali/vkupno);
    fclose(f);

    // vasiot kod ovde
}
