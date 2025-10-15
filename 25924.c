#include <stdio.h>
int main()
{
    int x ;
    int strange_sum(int y );
    int sum_digits(int x );
    printf("enter a number and I will give the sum  digits");
    scanf( "%d" , &x);
    printf("the sum  digits is %d" , sum_digits(x));
    int dig = 168;
    int outcome = strange_sum(dig);
    printf("\n%d ",outcome );
    return 0 ;
}

int strange_sum(int y )
    {
        if (2*y >= 10) return sum_digits(y);
        else if (1) return 2*y;
    }

int sum_digits(int x )
{
    int last = x%10 , not_last = (x-last)/10 ;

    if (not_last < 10)  return last + not_last ;
    else   return sum_digits(not_last) + last ;
}
