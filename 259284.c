#include<stdio.h>
#include<math.h>
int main()
{  int a , b, c ;
float s , i,p;
scanf("%d%d%d",&a,&b,&c);
p = ((float)(a+b+c))/2.0 ;
i =  (p-(float)(a))*(p-(float)(b))*(p-(float)(c))*p ;
s = sqrt(i);
printf("%.3f",s);



    return 0 ;
}

