#include <stdio.h>

int main()
{
    float x, y;
    printf("Vnesi koordinati za x i y:\n");
    scanf("%f %f", &x, &y);

    if(x>0)
    {
        if(y>0)
            printf("I Kvadrant");
        else if(y<0)
            printf("IV Kvadrant");
        else
            printf("Pozitivna X oska");
    }
    else if(x<0)
    {
        if(y>0)
            printf("II Kvadrant");
        else if(y<0)
            printf("III Kvadrant");
        else
            printf("Negativna x oska");
    }
    else
        if(y>0)
            printf("Pozitivna Y oska");
        else if (y<0)
            printf("Negativna Y oska");
        else
            printf("Koordinaten pocetok");

    return 0;

}
