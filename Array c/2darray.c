#include <stdio.h>

int main()
{
    int i, j, m, n, maximum,minimum,sum=0, average=0;
    int matrix[10][20];

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum=sum+matrix[i][j];
        }
    }
printf("The matrix is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
   maximum=matrix[0][0];
   minimum=matrix[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
          if(matrix[i][j]>maximum){
            maximum=matrix[i][j];

          }  
           if(matrix[i][j]<minimum){
            minimum=matrix[i][j];

        }
        }
    }
        printf("\n %d is the maximum element \n", maximum);
        printf("\n %d is the minimum element \n", minimum);
        average=sum/(m*n);
        printf("The average is %d:", average);

    


    return 0;
}