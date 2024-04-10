#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int iznos;
        char danok;
        scanf("%d %c", &iznos, &danok);
        if(danok == 'A')
        {
            sum += iznos*0.18;
        }
        else if(danok == 'B')
        {
            sum += iznos*0.05;
        }
    }
    printf("Total tax return is: %.2f", sum*0.15);

    return 0;
}
