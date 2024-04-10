#include <stdio.h>
#include <ctype.h>

int samoglaska(char c)
{
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    }
    else return 0;
}

int main()
{
    FILE * dat;
    if((dat = fopen("text.txt", "r")) == NULL)
    {
        printf("Datotekata ne e uspesno otvorena.");
        return 0;
    }
    char c;
    int samoglaski = 0, soglaski = 0;
    while((c = fgetc(dat)) != EOF)
    {
        if(isalpha(c))
        {
            if(samoglaska(c))
            {
                samoglaski++;
            }
            else{
                soglaski++;
            }
        }
    }

    printf("Odnos na samoglaski/soglaski: %d/%d = %.2f", samoglaski, soglaski, (float)samoglaski/soglaski);

    fclose(dat);

    return 0;
}
