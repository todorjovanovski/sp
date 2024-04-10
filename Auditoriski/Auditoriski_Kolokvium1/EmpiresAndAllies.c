#include <stdio.h>

int main()
{
    int x, n, w, l, MaxP, MaxI, points;
    int first = 1, counter = 0;

    scanf("%d", &x);
    while(x)
    {
        ++counter;
        scanf("%d %d %d", &n, &w, &l);
        if(n == 1)
        {
            points = w*13 - l;
        }
        else if(n == 2)
        {
            points = w*13 - l*3;
        }
        if(points > 0)
        {
            printf("Dobar igrac\n");
        }
        else
        {
            printf("Los igrac\n");
        }
        if (first == 1)
        {
            first = 0;
            MaxP = points;
            MaxI = 1;
        }
        else if(points>MaxP)
        {
            MaxP = points;
            MaxI = counter;
        }
        x--;
    }
    printf("Igracot %d ima najmnogu poeni: %d", MaxI, MaxP);

    return 0;

}
