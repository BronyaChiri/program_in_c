#include<stdio.h>
int main()
{ int inp , a , b ,c;
scanf("%d",&inp);
a = inp%10;
b = (inp % 100 - a)/10 ;
c = (inp - a - 10*b)/100 ;

    printf("%d %d %d",a,b,c);

    return 0 ;
}
