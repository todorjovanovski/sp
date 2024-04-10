#include <stdio.h>

int main()
{
    int n, sum, max = 1, max_num = 1;
    scanf("%d", &n);

    for(int i=1; i<n; ++i)
    {
        sum = 0;
        for(int j=1; j<i; ++j)
        {
            if(i%j == 0)
            {
                sum += j;
            }
        }
        if(sum>max)
        {
            max = sum;
            max_num = i;
        }
    }
    printf("%d", max_num);

    return 0;
}
