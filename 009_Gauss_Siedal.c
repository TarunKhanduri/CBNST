#include<stdio.h>


int main()
{
    float arr[3][4]={{2,1,1,10},
                   {3,2,3,18},
                   {1,4,9,16}};

    float x0=0,y0=0,z0=0;
    int i=4;
    float x1=(10-y0-z0)/2;
    float y1=(18-3*x1-3*z0)/2;
    float z1=(16-1*x1-4*y1)/9;

    while(i--)
    {
        printf("x=%f\ny=%f\nz=%f\n\n",x1,y1,z1);
        x0=x1;
        y0=y1;
        z0=z1;
        x1=(10-y0-z0)/2;
        y1=(18-3*x1-3*z0)/2;
        z1=(16-1*x1-4*y1)/9;
    }
    
}