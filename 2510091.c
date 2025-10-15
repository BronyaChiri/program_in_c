#include<stdio.h>
int print(int a);
int main()
{ int a,b,c ;
scanf("%d:%d:%d",&a,&b,&c);
if (c<=58) c += 1;
else {
    c = 0;
    if (b<=58) b += 1;
    else {b = 0;
           if (a<=22) a+=1;
           else a = 0;}
}
print(a);
putchar(':');
print(b);
putchar(':');
print(c);



    return 0 ;
}
int print(int x)
{
    if(x == 0) printf("%d%d",0,0);
    else printf("%d",x);
}
