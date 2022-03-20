#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int num,y,flage=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    y=num;

    y=ceil(sqrt(num));

    if(num==2)
    {
        printf("Prime number");
        exit(0);
    }
    else
    {
        for(i=2; i<=y; i++)
        {
            if(num%i==0)
                flage=-1;
        }
        if(flage==0)
            printf("Prime number");
        else    
            printf("Not a prime");
        return 0;
    }
}