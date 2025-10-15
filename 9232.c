#include <stdio.h>

int main()
{ int sum_digits( int x )
{
    int b = x%10 , a = (x-b)/10  ;

    if  (a <= 10) return b+a ;
    else if (1)  return sum_digits(a)+b ;


}
int a ;
printf("input a number.");
scanf("%d",&a);                                                                                                                                                                                                                                                                                                                                                                         Q
printf("The sum of all digits is %d",sum_digits(a));
return 0 ;
}
