#include<stdio.h>
int main()
{ int a , b ;
float ap , bp , p ;
scanf("%d:%d",&a,&b);
ap = (float)(a)*30 + (float)(b)*0.5 ;
bp = (float)(b)*6 ;
if (ap - bp >= 0 ) p = ap-bp;
else p = bp - ap ;
if (p > 180) p = 360 - p;

printf("%.3f",p);
    return 0 ;
}
