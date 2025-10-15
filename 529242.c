#include "stdio.h"
int main()
{int a ;
printf("enter a number ");
scanf("%d",&a);



        switch(a)
        {
            case 1 :printf("1") ;break;
            case 2 :
            case 3 :
            case 4 : printf("its 2-4") ; break;
            case 5 : printf("too big") ; break ;
        }


    return 0;
}
