#include<stdio.h>
void select_sort(int list[],int n);
void print_list(int list[],int n);
int main()
{int a[] = {15, 1, 53, 26, 43, 31, 47, 39, 8, 5, 12, 25, 1, 93,
30, 60, 83, 58, 64, 3, 23, 16, 97, 33, 77, 11, 28, 90, 59, 95} ;
int length = sizeof(a)/sizeof(a[0]);
select_sort(a,length);
print_list(a,length);
    return 0;
}
void select_sort(int list[],int n)
{int i = 0 , p = 0 , t = 0 , k = 0;
for (i=0;i<n-1;i++){
    p = i;
    for (t=i+1;t<n;t++){
            if(list[t] < list[p]) p = t;

    }
    if (p != i){k = list[i];list[i] =  list[p]; list[p] = k;}
}

}
void print_list(int list[],int n)
{int i = 0;
printf("%c",'[');
for (i=0;i<n;i++){
    printf("%d%c",list[i],',');

}
  printf("%c",']');
}
