#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, D;
    scanf("%d%d%d", &a, &b, &c);

    D = b*b - 4*a*c;
    float x1 = (-b - sqrt(D))/(2*a)*1.0;
    float x2 = (-b + sqrt(D))/(2*a)*1.0;


    if (D > 0)
    {
        printf("Reshenija na ravenkata se: %.2f i %.2f", x1, x2);
    }
    else if(D == 0)
    {
        printf("Dvojno reshenie na ravenkata e: %.2f", x1);
    }
    else
    {
        printf("Ravenkata nema realni reshenija");
    }

    return 0;
}
