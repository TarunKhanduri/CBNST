#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    float x[n];
    float y[n];
    float sumx=0,sumy=0,sumxy=0,sumx2=0;

    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
        sumx+=x[i];
        sumx2+=x[i]*x[i];
    }
    
    for(int i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
        sumy+=y[i];
    }

    for(int i=0;i<n;i++)
    {
        sumxy+=x[i]*y[i];
    }
    printf("x\ty\t\tx2\txy\n");
    for(int i=0;i<n;i++)
    {
        printf("%0.4f    %0.4f     %0.4f    %0.4f\n",x[i],y[i],x[i]*x[i],x[i]*y[i]);
    }
    printf("\nsumx= %0.4f\nsumy= %0.4f\nsumx2= %0.4f\nsumxy= %0.4f\n",sumx,sumy,sumx2,sumxy);

    float a=(sumx2*sumy-sumxy*sumx)/(n*sumx2-sumx*sumx);
    float b=(n*sumxy-sumy*sumx)/(n*sumx2-sumx*sumx);
    printf("a=  %f\nb=  %f",a,b);

}