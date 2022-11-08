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
        printf("%f\t",ans[i]);
}
int main()
{
    float arr[3][4]={{2,1,1,10},
                   {3,2,3,18},
                   {1,4,9,16}};

    p(arr);
    solve(arr);

}