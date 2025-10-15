#include <stdio.h>
int main()
{
    double x , y ;
    printf("input the radius");
    scanf("%lf",&x );
    y = 3.1415*(x*x);
    printf( "area is %.2lf\n" ,y );
    
    return 0;
}
