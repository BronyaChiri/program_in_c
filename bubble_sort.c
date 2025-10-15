#include<stdio.h>
void bubble_sort(int listn[],int n);
void print_arr(int list[],int n);
int main()
{int a[]={4,784,7,7,377,778,3332,787,1,78,8,1,3,4,6,76,889,545};
int l = sizeof(a)/sizeof(a[0]);
bubble_sort(a,l);
print_arr(a,l);
return 0;
}
void bubble_sort(int listn[],int n)
{int i = 0 , j = 0 ,t=0;

   for (i=0;i<=n;i++) {
    for (j=0;j<=n-i-1;j++){
        if (listn[j]>listn[j+1])
            {t = listn[j];
        listn[j]=listn[j+1];
        listn[j+1]=t;}
    }
   }

}
void print_arr(int list[],int n)
{
int i=0;
printf("%c",'[');
for (i=0;i<n;i++){
    printf("%d%c",list[i],',');
}
printf("%c",']');


}
