#include <stdio.h>

int main()
{
    long int n;
    int x,y,z;
    scanf("%ld", &n);

    x = n/1000000;
    y = (n/1000)%1000;
    z = n%1000;

    if(x>=70 && x<= 72 || x>=75 && x<80)
    {
        if (x > 78)
        {
            printf("%.3d/%.3d-%.3d LycaMobile", x, y, z);
        }
        else if (x>74)
        {
            printf("%.3d/%.3d-%.3d A1", x, y, z);

        }
        else
            printf("%.3d/%.3d-%.3d T-mobile", x, y, z);
    }
    else
        printf("Vnesi validen mobilen broj.");;

    return 0;
}
