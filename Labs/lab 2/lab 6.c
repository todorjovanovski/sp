#include <stdio.h>

int main()
{
    int n;
    printf("Vnesi petcifren broj: ");
    scanf("%d", &n);

    if(n<10000 || n>99999)
    {
        printf("\nVneseniot broj ne e petcifren!\n");
        return main();
    }

    int sum1 = n/10000 + n%10;
    int sum2 = (n/1000)%10 + (n/10)%10;
    int sredna = (n/100)%10;

    printf("%d %d %d", sum1, sum2, sredna);

    return 0;
}
