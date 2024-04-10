#include <stdio.h>
#include <math.h>

int main()
{
    int n, d, minD, first = 1;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int d = abs(a-b) + abs(b-c);
        if(first == 1)
        {
            first = 0;
            minD = d;
        }
        else
        {
            if(d<minD)
            {
                minD = d;
            }
        }
    }
    printf("%d", minD);

    return 0;
}
