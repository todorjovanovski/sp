#include <stdio.h>
#include <string.h>
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

    FILE *dat = fopen("text.txt", "r");
    char c, str[1000];
    int br_zborovi = 0, sum = 0, redovi = 0, counter = 0, first = 1, max = 0, max_counter = 0, i_counter;

    while((c = getc(dat)) != EOF)
    {
        if(isalpha(c))
        {
            if(islower(c))
            {
                str[counter] = toupper(c);
            }
            else{
                str[counter] = tolower(c);
            }
        }
        else{
            str[counter] = c;
        }

        if(isspace(c))
        {
            br_zborovi++;
        }
        if(c == '\n')
        {
            printf("%d\n", br_zborovi);
            sum += br_zborovi;
            redovi++;
            if(first == 1)
            {
                first = 0;
                max = br_zborovi;
            }
            else{
                if(br_zborovi > max)
                {
                    max = br_zborovi;
                    max_counter = i_counter+1;
                }
            }
            i_counter = counter;
            br_zborovi = 0;
        }
        counter++;
    }

    printf("%.2f\n", (float)sum/redovi);
    for(int i=max_counter; i<counter; i++)
    {
        printf("%c", str[i]);
        if(str[i] == '\n')
            break;
    }

    fclose(dat);

    // vasiot kod ovde
}
