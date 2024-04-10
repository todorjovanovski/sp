#include <stdio.h>

void writeToFile()
{
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#')
    {
        fputc(c, f);
    }
    fclose(f);
}

void printFile()
{

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f))
    {
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main()
{
    writeToFile();

    FILE * vlezna, * izlezna;
    vlezna = fopen("input.txt", "r");

    int n, matrica[100][100];
    fscanf(vlezna, "%d", &n);

    for(int i=0; i<n && !feof(vlezna); i++)
    {
        for(int j=0; j<n && !feof(vlezna); j++)
        {
            fscanf(vlezna, "%d", &matrica[i][j]);
        }
    }

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
            {
                sum += matrica[i][j];
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i < j)
            {
                matrica[i][j] = sum;
            }
            else
            {
                matrica[i][j] = 32;
            }
        }
    }


    izlezna = fopen("output.txt", "w");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(matrica[i][j] == 32)
            {
                fprintf(izlezna, "%c   ", matrica[i][j]);
            }
            else{
                fprintf(izlezna, "%03d ", matrica[i][j]);
            }
        }
        fprintf(izlezna, "\n");
    }

    fclose(vlezna);
    fclose(izlezna);

    //Vasiot kod tuka


    printFile();

    return 0;
}
