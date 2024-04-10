#include <stdio.h>

struct Tocka
{
    int x, y;
};

int main()
{
    struct Tocka A;
    scanf("%d%d", &A.x, &A.y);
    struct Tocka B;
    scanf("%d%d", &B.x, &B.y);
    struct Tocka C;
    scanf("%d%d", &C.x, &C.y);

    int AB = sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
    int BC = sqrt(pow((B.x - C.x), 2) + pow((B.y - C.y), 2));
    int AC = sqrt(pow((A.x - C.x), 2) + pow((A.y - C.y), 2));

    if (AB > BC && AB > AC)
    {
        printf("AB");
    }
    else if(BC > AB && BC > AC)
    {
        printf("BC");
    }
    else
    {
        printf("AC");
    }

    return 0;
}
