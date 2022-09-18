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

    char choice='0';
    do
    {
        printf("\n\n'0'   Exit\n'1'   Truncate\n'2'   Round off\n'3'    change input values\nEnter your choice:    ");
        scanf(" %c",&choice);

        switch(choice)
        {
            case '1':Truncate(x1,power);
                    break;
            case '2':Round_off(x1,power);
                    break;
            case '3': printf("\nEnter a no: ");
                    scanf("%lf",&x1);
                    printf("enter: ");
                    scanf("%d",&n);
                    power=pow(10,n);
                    break;

            case '0':printf("\nThank you");
                    break;
            default:printf("\nInvalid input");
        }

    }while(choice!='0');
    return 0;
}