#include <stdio.h>

int main()
{
    int n, del, c1, c2, broj;
    del = c1 = c2 = 0;
    printf("Kolku broevi ke bidat vneseni: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++)
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
    }
    printf("Del so 3: %d\nOstatok 1: %d\nOstatok 2: %d", del, c1, c2);

    return 0;
}
