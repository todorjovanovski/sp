#include <stdio.h>

int main()
{
    int n, razlika, suma_p = 0, suma_n = 0, broj;
    printf("Koklu broevi ke bidat vneseni: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &broj);
        if(i%2 == 0)
        {
            suma_p += broj;
        }
        else
        {
            suma_n += broj;
        }
    }
    razlika = suma_p - suma_n;
    if(razlika < 10 && razlika > -10)
    {
        printf("Dvete sumi se slicni.");
    }
    else
    {
        printf("Dvete sumi mnogu se razlikuvaat.");
    }

    return 0;
}
