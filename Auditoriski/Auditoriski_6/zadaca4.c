#include <stdio.h>

int main()
{
    int n, rastecka = 1, opagjacka = 1;

    printf("Golemina na niza: ");
    scanf("%d", &n);

    int niza[n];
    for (int i=0; i<n; i++)
    {
        printf("[%d] ", i);
        scanf("%d", &niza[i]);
    }
    for (int i=0; i<n; i++)
    {
        if(niza[i]>niza[i+1])
        {
            rastecka = 0;
            break;
        }
        else if(niza[i]<niza[i+1])
        {
            opagjacka = 0;
            break;
        }
    }

    if (!opagjacka && !rastecka)
    {
        printf("Nizata ne e nitu rastecka nitu opagjacka.");
    }
    else if(rastecka)
    {
        printf("Nizata e rastecka.");
    }
    else
    {
        printf("Nizata e opagjacka.");
    }

    return 0;
}
