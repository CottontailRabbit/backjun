#include <stdio.h>

int main()
{
    int max = 0;
    int num = 0;


    for (int i = 0; i < 5; i++)
    {
        int a,b,c,d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if(a+b+c+d > max)
        {
            max = a+b+c+d;
            num = i;
        }
    }
    

    for (int i = 0; i < 4; i++)
    {
        if (sum[i] > max)
        {
            max = sum[i];
            num = i;
        }
    }
    
    printf("%d %d", num+1, max);

    return 0;
}