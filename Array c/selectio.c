#include <stdio.h>
int main()
{
    int a[50];
    int i, size, j, min, temp;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    for (i = 0; i <= size - 1; i++)
    {
        printf("The elements at a[%d] are:\n", i);
        scanf("%d", &a[i]);
    }
    printf("the unsorted array is:\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    for (i = 0; i <= size - 2; i++)
    {
        min = i;
        {
            for (j = i; j <= size - 1; j++)
            {
                if (a[j] < a[min])
                {
                    min = j;
                }
            }
            if (min != i)
            {
                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
        }
    }
        printf("The sorted array is:\n");
        for (i = 0; i <= size - 1; i++)
        {
            printf("a[%d]=%d\n", i, a[i]);
        }
    
        return 0;
    }
