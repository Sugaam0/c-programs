//c-program to add two arrays and store the sum in third array
#include <stdio.h>
int main()
{
    int a[50], b[50], sum[100];
    int i, size1, size2;
    top:
    printf("Enter the size of first array:");
    scanf("%d", &size1);
    printf("Enter the size of second array:");
    scanf("%d", &size2);
    if(size1==size2)
        {
            size1=size2;
            for (i = 0; i <= size1 - 1; i++)
                    {
                    printf("The elements at a[%d] are:\n", i);
                    scanf("%d", &a[i]);
                    }
            for (i = 0; i <= size1 - 1; i++)
                    {
                    printf("\nThe elements at b[%d] are:\n", i);
                    scanf("%d", &b[i]);
                    }
                    printf("\nThe elements of first array are:\n");
                    for(i=0;i<=size1-1;i++){
                        printf("a[%d]=%d\n", i, a[i]);
                    }
                     printf("\nThe elements of second array are:\n");
                    for(i=0;i<=size1-1;i++){
                        printf("b[%d]=%d\n", i, b[i]);
                    }
            for(i=0;i<=size1-1;i++)
                {
                    sum[i]=a[i]+b[i];
                }
                printf("The sum of array is:\n ");
                for(i=0;i<=size1-1;i++){
                    printf("sum[%d]=%d\n", i, sum[i]);
                }
        }
    else if(size1!=size2)
        {
            goto top;
        }
        return 0;
}

    