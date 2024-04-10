#include <stdio.h>

int main()
{
    int i = 11, sum = 0;
    printf("%d", i);
    sum = i;
    i += 2;
    while(i <= 99)
    {
        printf(" + %d ", i);
        sum += i;
        i += 2;
    }
    printf(" = %d", sum);
}
