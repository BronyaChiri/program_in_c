#include <stdio.h>
int main()
{ /*
    printf("Enter a number\n");
int number;
scanf("%d",&number);
printf("the sum is %d.\n",sum(number));
*/
printf("enter a number");
int divide_table(int x);
int x ;
scanf("%d",&x);
divide_table(x);
    return 0;
}

int sum(int x)
{   int sum_x = 0, i;
    for ( i = 1 ;i<=x ; i += 2 )
        {  sum_x += i ;

        }
    return sum_x ;
}

int divide_table(int x)
{   int len=1 , verti = 1 , data;
for(verti = 1; verti <= x; verti++)
{


   for (len=1;len<=x;len++)
   {  data = len * verti ;
   printf("%d   ",data);

   }
   printf("\n");

}
    return 0;
}

