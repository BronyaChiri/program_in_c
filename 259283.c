#include<stdio.h>
#include<math.h>

int main()
{  int money , year ;
double  rate , interest ;
printf("Enter money,year and rate:");
scanf("%d%d%lf",&money,&year,&rate);
interest = money*pow((double)(1.000+rate),year)-money ;



  printf("interest=%.2lf",interest);


    return 0 ;
}
