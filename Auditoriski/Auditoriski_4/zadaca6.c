#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Vnesi dolzini za stranite na triagolnik:\n");
    scanf("%f%f%f", &a, &b, &c);
    if((a+b <= c) || (a+c <= b) || (b+c <= a))
        printf("Ne moze da se konstruira triagolnik so vnesenite strani");
    else
    {
        if (a >= b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        if (a >= c)
        {
            int temp = a;
            a = c;
            c = temp;
        }
        if (b >= c)
        {
            int temp = b;
            b = c;
            c = temp;
        }
        if (c*c == a*a + b*b)
        {
            printf("Triagolnikot e pravoagolen.\nPlostinata na triagolnikot iznesuva: %.2f", (a+b)/2);
        }
        else
            printf("Triagolnikot ne e pravoagolen.");
    }

    return 0;

}
