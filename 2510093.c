#include<stdio.h>
#include<math.h>
int main()
{ int n , m , i=1 ;
double r = 0 , h = 0 ;
scanf("%d%d",&n,&m);
r += (double)(n) ;
for (i = 1;i<= m;i++){
    r += 2*h ;
    h = (double)(n)*pow((double)(0.25),(double)(i));
}
printf("%.2lf\n%.2lf",r,h);

    return 0 ;
}
