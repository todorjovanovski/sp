#include <stdio.h>

int main()
{
    int previous, next, max_sum, sum, pol_position, position;
    scanf("%d%d", &previous, &next);
    pol_position = position = 2;
    max_sum = sum = previous + next;
    while(1)
    {
        if (previous<0 && next <0)
        {
            break;
        }
        sum = previous + next;
        if(sum > max_sum)
        {
            max_sum = sum;
            pol_position = position;
        }
        previous = next;
        scanf("%d", &next);
        position++;
    }
    if(position > 2)
    {
        printf("Broevite se na pozicii %d i %d i nivnata suma e %d", pol_position - 1, pol_position, max_sum);
    }
    return 0;
}
