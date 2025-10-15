#include<stdio.h>
int d[50];
int m ;

int crack(int x,int y[ ],int i );


int main()
{
     int x ,i =0;



printf("enter a number\n");
scanf("%d",&x);

m = crack(x, d,i);

int t =0;
for (t=0 ;t<= m ;t++)
{  printf("%d\n",d[t]);
}
return 0 ;
}

int crack(int x,int y[ ],int i )
{    if (x>= 10){
            y[i] = x%10 ;
            x = (x-x%10)/10 ;
             i += 1;
     return    crack(x , y,i);
        }
    else{ y[i]=x ;
    return i ;
    }
return 0 ;
}
