#include <stdio.h>
int main()
{ int chinese, math ,english;
double average ;
printf("Enter your chinese math english scores:");

scanf("%d%d%d",&chinese,&math,&english);
average = ((float)(chinese)+(float)(math)+(float)(english))/3 ;
printf("chinese=%d,",chinese);
printf("math=%d,",math);
printf("english=%d,",english);
printf("average=%.2f",average);



    return 0;
}
