#include<stdio.h>

int main()
{
     int s;

     printf("Vnesi sekundi: ");
     scanf("%d", &s);

     printf("%d sekundi se %d casovi, %d minuti i %d sekundi", s, s/3600, (s%3600)/60, (s%3600%60));

     return 0;
}
