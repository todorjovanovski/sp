#include <stdio.h>

int main()
{
    int n, maxL = 0, maxI, i = 0;
    scanf("%d", &n);

    while(n)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        ++i;
        if(a+b > c && a+c > b && b+c > a)
        {
            printf("Moze\n");
            if (a+b+c > maxL)
            {
                maxL = a + b + c;
                maxI = i;
            }
        }
        else
        {
            printf("Ne moze\n");
        }
        n--;
    }
    printf("Najgolemiot perimetar: %d\nPozicija: %d", maxL, maxI);

}
