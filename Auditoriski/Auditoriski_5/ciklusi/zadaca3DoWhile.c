#include <stdio.h>

int main()
{
    int n, i = 0, broj, del, c1, c2;
    del = c1 = c2 = 0;
    printf("Kolku broevi ke bidat vneseni: ");
    scanf("%d", &n);

    do
    {
        scanf("%d", &broj);
        if(broj % 3 == 0)
        {
            del++;
        }
        else if(broj % 3 == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        i++;
    }
    while(i<n);

    printf("Del so 3: %d\nOstatok 1: %d\nOstatok 2: %d", del, c1, c2);

    return 0;
}
