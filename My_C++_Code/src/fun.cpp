#include <stdio.h>
void Determinant(void)
{
    float matrix[10][10],result=1,xshu;
    int n,i,j,k;
    do
    {
        printf("请输入待计算的行列式的阶数(n>1)：\n");
        scanf("%d",&n);
    }while(n<2);
    printf("请输入待计算的行列式(用空格隔开)：\n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           scanf("%f",&matrix[i][j]);
       }
    }
    printf("\n");
    for(k=0;k<n-1;k++)
    {
        for(i=0;i<n-1;i++)
         {
            xshu=-1*matrix[i+k+1][k]/matrix[k][k];  //算出来下一行之间的系数
            for(j=0;j<n;j++)
            {
                matrix[i+k+1][j]=matrix[i+k+1][j]+xshu*matrix[k][j];
            }
        }
    }

    for(i=0;i<n;i++)  //计算结果
        result*=matrix[i][i];
    printf("计算结果为：%.3f\n\n",result);
    if(result!=0.0)
        printf("  这是一个非奇异行列式\n");
    else
        printf("  这是一个奇异行列式\n");
    printf("\n");
   return;
}
