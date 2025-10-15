#include <stdio.h>
int main()
{ printf("Enter a number and i will give the sum from 1 to the number.\n");
int num;
scanf("%d",&num);
printf("the sum is %d.\n",adder(num));  //it is an adder
if (num>=100)
{
    printf("The number is big but i can calculate  ^_^ \n");
}
else {printf("haha,so easy!\n");}
    return 0;
}

int adder(int x)
{ int i=1,sum=0 ;
   if(x>=1){
    do { sum += i;i++;}while(i<=x);
   }
    else printf("Cant calculate.");

    return sum;
}

