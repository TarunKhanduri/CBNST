#include<stdio.h>
#include<math.h>
float fun(float x)
{
    return  1/(1+x*x);
}

void solve(float h,float *y,int n)
{
    float ans=y[0]+y[n];
    float sumo=0,sume=0;
    for(int i=1;i<n;i+=2)
    {
        sumo+=y[i];
    }
    for(int i=2;i<n;i+=2)
    {
        sume+=y[i];
    }
    sumo*=4;
    sume*=2;
    ans=(ans+sume+sumo)*h/3;
    printf("ans= %0.5f",ans);
}
int main()
{
    float x0,xn;
    scanf("%f%f",&x0,&xn);
    
    float h;
    scanf("%f",&h);
    int n=ceil((xn-x0)/h);
    printf("n   =   %d\n",n);
    
    float y[n+1];
    printf("x            y\n");
    for(int i=0;i<=n;i++)
    {
        y[i]=fun(x0);
        printf("%0.5f      %0.5f\n",x0,y[i]);
        x0+=h;
    }

    solve(h,y,n);
}