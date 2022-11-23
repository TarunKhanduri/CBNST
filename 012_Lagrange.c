#include<stdio.h>

void solve(float* x, float *y, int n ,float value)
{
    printf("x=  ");
    for(int i=0;i<n;i++)
        printf("%0.2f   ",x[i]);
    printf("\ny=  ");
    for(int i=0;i<n;i++)
        printf("%0.2f   ",y[i]);
    
    float ans=0;
    for(int i=0;i<n;i++)
    {
        float a=1,b=1;
        for(int j=0;j<n;j++)
        {
            if(j!=i){
                a*=(value-x[j]);
                b*=(x[i]-x[j]);
            }
        }
        ans+=a*y[i]/b;
    }
    printf("\nans =   %0.5f",ans);
}

int main()
{
    int n;
    scanf("%d",&n);
    float x[n];
    float y[n];

    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    float value;
    scanf("%f",&value);
    solve(x,y,n,value);
}