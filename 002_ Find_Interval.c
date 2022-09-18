#include<stdio.h>
#include<math.h>

int fun(int x)
{
    return pow(x,3)-4*x-9;
}

void find_interval(int *a,int *b)
{
    int i=0,j=1;
    while(j<=5)
    {
        if((fun(i)>=0 && fun(j)<0)||(fun(i)<0 && fun(j)>=0)){
            *a=i;*b=j;
            return;
        }
        i++;
        j++;
    }
    if(a==0 && b==0)
    {
        i=-1;j=-2;
        while(j!=-5)
        {
            if((fun(i)>=0 && fun(j)<0)||(fun(i)<0 && fun(j)>=0)){
                *a=i;*b=j;
                return;
            }
            i--;
            j--;
        }      
    }
}
int main()
{
    int a=0,b=0;
    find_interval(&a,&b);
    printf("%d  %d",a,b);
}