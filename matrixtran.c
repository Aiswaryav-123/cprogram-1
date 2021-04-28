#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n;
    printf("Enter the order of the matrix:");
    scanf("%d%d",&m,&n);
    if(m<=10 && n<=10)
    {
        printf("Enter the matrix:");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(j=0;j<n;j++)
        {
            for(i=0;i<m;i++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter order less than or equal to 10 x 10\n");
    }
}
