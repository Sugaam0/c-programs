#include <stdio.h>

int main()
{
    int i, j, m, n, num, count=0;
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
    printf("Enter any number:");
    scanf("%d", &num);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(num==matrix[i][j]){
count++;           
        }
        
    }
    }
    if(count>0){
                printf("the number is present in matrix");

    }
    else{
        printf("The number is not present");
    }
    return 0;
}

   