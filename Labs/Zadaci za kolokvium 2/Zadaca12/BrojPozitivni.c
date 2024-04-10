#include <stdio.h>

int BrojPozitivni(int niza[], int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(niza[n-1] > 0){
        return 1 + BrojPozitivni(niza, n-1);
    }
    return BrojPozitivni(niza, n-1);

}

int main()
{
    int n, niza[100];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    printf("%d", BrojPozitivni(niza, n));

    return 0;
}
