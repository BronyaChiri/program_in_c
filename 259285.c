#include<stdio.h>
int dud(int x);
int main()
{  int a,b ,i=1,last,nl;
int c[4];
printf("Enter a number:");
scanf("%d",&a);
nl = a;
for(i=1;i<=4;i++){
        last = nl%10;
c[i] = dud(last);
nl = (nl-last)/10;
    }
b = 1*c[3] +10*c[4] + 100*c[1] + 1000*c[2];
printf("The encrypted number is %d",b);
    return 0 ;
}
int dud(int x )
{return (x+9)%10 ;
}
