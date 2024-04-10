#include <stdio.h>

double dropka(int niza[], int i, int n)
{
    if(i == n)
    {
        return 0;
    }
    else{
        if(i == n-1)
        {
            return niza[i] + dropka(niza, i+1, n);
        }
        else{
            return niza[i] + 1.0 / dropka(niza, i+1, n);
        }
    }
}


int main()
{
    int n, niza[100];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    printf("%lf", dropka(niza, 0, n));

    return 0;
}
