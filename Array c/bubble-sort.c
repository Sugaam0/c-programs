#include <stdio.h>
int main()
{
    int a[50];
    int i, size, temp,j;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    for (i = 0; i <= size - 1; i++)
    {
        printf("The elements at a[%d] is:\n", i);
        scanf("%d", &a[i]);
    }
    printf("the unsorted array is:\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    for (i = 0; i <= size - 1; i++)
    {
        for (j = 0; j <= size - 2; j++)
        {
            if (a[j] > a[j + 1])
            {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("The array in ascending order is:\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    for (i = 0; i <= size - 1; i++)
    {
        for (j = 0; j <= size - 2; j++)
        {

            if (a[j] < a[j + 1])
            {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("The array in descending order is:\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    return 0;
}
