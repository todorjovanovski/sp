#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Vnesi dolzini za stranite na triagolnik:\n");
    scanf("%f%f%f", &a, &b, &c);
    if((a+b <= c) || (a+c <= b) || (b+c <= a))
        printf("Ne moze da se konstruira triagolnik so vnesenite strani");
    else
    {
        if (a == b && b == c)
            printf("Triagolnikot e ramnostran.");
        else if(a==b || a==c || b==c)
            printf("Triagolnikot e ramnokrak.");
        else
            printf("Triagolnikot e raznostran.");
        float p, s = (a + b + c)/2;
        p = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("\nPlostina: %.2f", p);
    }

    return 0;

}
