#include <stdio.h>

int main()
{
    int a, b, z, counter = 0, sum = 0;

    scanf("%d", &z);

    while(1)
    {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0)
        {
            break;
        }

        if(a+b == z)
        {
            counter++;
        }

        sum++;
    }

    float p = (1.0/sum)*counter*100;
    printf("Vnesovte %d parovi od broevi chij zbir e %d\nProcentot na parovi so zbir %d e %.2f%%", counter, z, z, p);

    return 0;

}
