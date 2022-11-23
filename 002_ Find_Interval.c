#include<stdio.h>
#include<math.h>

int fun(int x)
{
    return pow(x,3)-4*x-9;
}

void find_interval(int *a,int *b)
{
    for(int i=-5;i<5;i++)
        if(fun(i)*fun(i+1)<0)
         {
          *a=i;
          *b=i+1;
         }  
}
int main()
{
    int a=0,b=0;
    find_interval(&a,&b);
    printf("%d  %d",a,b);
}