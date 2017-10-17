#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x,y,i,u1,u2,rem,quo,tmp,dividend,divisor;

    printf("Please input Divisor:\t");
    scanf("%d",&x);
    printf("\nPlease input Dividend:\t");
    scanf("%d",&y);
    rem = x;
    dividend = y;
    divisor = x;
    u2=0; u1=1;
    while(rem != 1)
    {
        rem = y%x;
        quo = y/x;
        tmp = u1;
        u1 = u2 - (quo*u1);
        u2 = tmp;
        y = x;
        x = rem;
    }
    if(u1 < 0)
        printf("\nThe Multiplicative Inverse of %d w.r.t %d is:\t%d\n\n", divisor, dividend, dividend+u1);
    else
        printf("\nThe Multiplicative Inverse of %d w.r.t %d is:\t%d\n\n", divisor, dividend, u1);
}
