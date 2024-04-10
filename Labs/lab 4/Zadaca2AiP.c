    #include <stdio.h>

    int main()
    {
        int a, p, counter = 0, num[100];
        scanf("%d %d", &a, &p);

        for(int i=1; i<=a; i++)
        {
            float procent = (i/100.0)*p;
            int temp = i, sum = 0;
            while(temp)
            {
                sum += temp%10;
                temp /= 10;
            }
            if(procent == sum)
            {
                num[counter] = i;
                counter++;
            }
            if(counter == 4)
            {
                break;
            }
        }
        if(counter == 0)
        {
            printf("NEMA");
        }
        else
        {
            for(int i=counter-1; i>=0; i--)
            {
                printf("%d\n", num[i]);
            }
        }


        return 0;
    }
