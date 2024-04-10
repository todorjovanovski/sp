#include <stdio.h>
#include <math.h>

int poramnet(int a)
{
    int counter = 0;
    int temp = a;
    while(temp)
    {
        counter++;
        temp/=10;
    }
    int modul = 1;
    for(int i=0; i<counter - 1; i++)
    {
        modul *= 10;
    }
    if(a == 0)
    {
        return 0;
    }
    if(a/modul == 9)
    {
        return 7 * modul + poramnet(a % modul);
    }
    else{
        return (a/modul) * modul + poramnet(a % modul);
    }

}

int main()
{
    int broj, niza[100], counter = 0;
    while(scanf("%d", &broj))
    {
        niza[counter] = poramnet(broj);
        counter++;
    }

    for(int i=0; i<counter-1; i++)
    {
        for(int j=i+1; j<counter; j++)
        {
            if(niza[i]>niza[j])
            {
                int temp = niza[i];
                niza[i] = niza[j];
                niza[j] = temp;
            }
        }
    }

    for(int i=0; i<counter; i++)
    {
        if(i<5)
            printf("%d ", niza[i]);
    }

    return 0;
}
