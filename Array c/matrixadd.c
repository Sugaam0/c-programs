#include <stdio.h>
int main()
{
    int a[50][50],b[50][50], sum[50][50];
    int i,j , r1, r2,c1,c2 ;
top:
     printf("Enter number of rows : ");
    scanf("%d", &r1);
    printf("Enter number of columns : ");
    scanf("%d", &c1);
     printf("Enter number of rows : ");
    scanf("%d", &r2);
    printf("Enter number of columns : ");
    scanf("%d", &c2);
    if(r1==r2 && c1==c2)
        {
            c1=c2;
            r1=r2;
             for (i = 0; i < r1; i++)
                    {
                     for (j = 0; j < c1; j++)
                            {
                             printf("Enter data in a[%d][%d]: ", i, j);
                             scanf("%d", &a[i][j]);
           
                            }
                    }
        
         for (i = 0; i < r2; i++)
                {
                for (j = 0; j < c2; j++)
                    {
                     printf("Enter data in b[%d][%d]: ", i, j);
                     scanf("%d", &b[i][j]);
                    }
                 }
     printf("The matrix first matrix is :\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is:\n");
     for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=r1-1;i++){
        for(j=0;j<=c1-1;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
        
        printf("The sum of array is:\n");
         for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
        else
        {
            goto top;
        }

return 0;
}
