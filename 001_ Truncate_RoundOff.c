#include<stdio.h>
#include<math.h>
void Truncate(double x1,int power)
{
    
    float x2=(int)(x1*power);
    x2/=power;

    printf("\nx'= %f",x2);
}

void Round_off(double x1,int power)
{
    float x2=(int)(x1*power*10);
    int temp=((int)x2)%10;
    
    x2=(int)(x2/10);

    if(temp>=5)
        x2++;
    
    x2/=power;
    
    printf("\nx'= %f",x2);
}
int main()
{
    double x1;
    printf("\nEnter a no: ");
    scanf("%lf",&x1);
    int n;
    printf("enter: ");
    scanf("%d",&n);

    int power=pow(10,n);

    Truncate(x1,power);
    Round_off(x1,power);
    return 0;
}