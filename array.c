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
                    printf("The elements at b[%d] are:\n", i);
                    scanf("%d", &b[i]);
                    }
            for(i=0;i<=size1-1;i++)
                {
                    sum[i]=a[i]+b[i];
                }
                printf("The sum of array is:\n ");
                for(i=0;i<=size1-1;i++){
                    printf("sum[%d]=%d", i, sum[i]);
                }
        }
    else if(size1!=size2)
        {
            goto top;
        }
        return 0;
}

    