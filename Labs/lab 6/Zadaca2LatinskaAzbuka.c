#include <stdio.h>

int main()
{
    char c;
    int k;
    scanf("%c%d", &c ,&k);

    int ans = c + k;
    while(ans > 90)
    {
        ans = ans - 26;
    }
    printf("%c", ans);

    return 0;
}
