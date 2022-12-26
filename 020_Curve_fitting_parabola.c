#include<stdio.h>
void p(float arr[3][4])
{
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%f\t",arr[i][j]);
        }
        printf("\n");
    }
}
void solve(float arr[3][4])
{
    for(int i=0;i<2;i++)
    {
        for(int k=i+1;k<3;k++)
        {
        float ratio=arr[k][i]/arr[i][i];
        for(int j=0;j<4;j++)
        {
            arr[k][j]=arr[k][j]-arr[i][j]*ratio;
        }
        p(arr); 
        }
    }
    float ans[3];
    ans[2]=arr[2][3]/arr[2][2];


    for(int i=1;i>=0;i--)
    {
        float sum=0;
        for(int j=i+1;j<3;j++)
        {
            sum+=arr[i][j]*ans[j];
        }
        ans[i]=(arr[i][3]-sum)/arr[i][i];
    }

    for(int i=0;i<3;i++)
        printf("\n%f\t",ans[i]);
}
int main()
{
    int n;
    scanf("%d",&n);

    float x[n];
    float y[n];
    float sumx=0,sumy=0,sumxy=0,sumx2=0,sumx3=0,sumx4=0,sumx2y=0;

    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
        sumx+=x[i];
        sumx2+=x[i]*x[i];
        sumx3+=x[i]*x[i]*x[i];
        sumx4+=x[i]*x[i]*x[i]*x[i];
   
    }
    
    for(int i=0;i<n;i++)
    {   
        scanf("%f",&y[i]);
        sumx2y+=x[i]*x[i]*y[i];
        sumy+=y[i];
        sumxy+=x[i]*y[i];
    }


   printf("\nsumx=  %0.4f\nsumy=  %0.4f\nsumx2=  %0.4f\nsumx3=  %0.4f\nsumx4=  %0.4f\nsumxy=  %0.4f\nsumx2y=  %0.4f\n",sumx,sumy,sumx2,sumx3,sumx4,sumxy,sumx2y);

    float arr[3][4];
    arr[0][0]=n;arr[0][1]=sumx;arr[0][2]=sumx2;arr[0][3]=sumy;
    arr[1][0]=sumx;arr[1][1]=sumx2;arr[1][2]=sumx3;arr[1][3]=sumxy;
    arr[2][0]=sumx2;arr[2][1]=sumx3;arr[2][2]=sumx4;arr[2][3]=sumx2y;

    printf("\nusing gauss elimination\n");

    solve(arr);

}