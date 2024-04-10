#include <stdio.h>
#include <string.h>

int main()
{
    FILE * vlezna, * izlezna;
    if((vlezna = fopen("matrica1.txt", "r")) == NULL)
    {
            printf("Datotekata ne e uspesno otvorena.");
            return 0;
    }
    izlezna = fopen("matrica2.txt", "w");

    float niza[100][100], transponirana[100][100];
    int m, n;
    fscanf(vlezna, "%d %d", &m, &n);

    for(int i=0; i<m && !feof(vlezna); i++)
    {
        for(int j=0; j<n && !feof(vlezna); j++)
        {
            fscanf(vlezna, "%f", &niza[i][j]);
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            transponirana[j][i] = niza[i][j];
        }
    }

    fprintf(izlezna, "%d %d\n", n, m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            fprintf(izlezna, "%.1f\n", transponirana[i][j]);
        }
    }

    fclose(vlezna);
    fclose(izlezna);

    return 0;
}
