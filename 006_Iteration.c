#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// float fun(float x)
// {
//     return pow(x,3)-2*pow(x,2)-4;
// }

float fun1(float x)
{
    return pow((2*pow(x,2)+4),(1/3.0));
}

float dfun(float x)
{
    return (4*x)/(3*pow(2*pow(x,2)+4,(2/3.0)));
}

int main()
{
    float a=2,b=3;
    if(fabs(dfun(a)>=1)||fabs(dfun(b)>=1))
    {
        printf("invalid\n");
        exit(0);
    }

    int i=0;
    float x0=(a+b)/2;
    
    float x1=fun1(x0);
    printf("x%d ->  %f\n",i++,x0);
    while(fabs(x1-x0)>0.0001)
    {
        x0=x1;
        printf("x%d ->  %f\n",i++,x1);
        x1=fun1(x0);
    }
}