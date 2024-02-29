
#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,i,j;
    printf("enter row and column");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],sum[m][n];
    printf("enter the elements of first matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of second matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);  
        }
    }
    for (i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           sum [i][j]=a[i][j]+b[i][j];
      }
    }

    printf("\n The sum of the matrix is :\n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

