#include <stdio.h>
int main()
{
    int a[50];
    int i, size, evencount = 0, oddcount = 0, oddsum = 0, evensum = 0;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    for (i = 0; i <= size - 1; i++)
    {
        printf("The elements at a[%d] are:", i);
        scanf("%d", &a[i]);
    }
    printf("the elements are:\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf("\na[%d]=%d", i, a[i]);
    }
    for (i = 0; i <= size - 1; i++)
    {
        if (a[i] % 2 == 0)
        {
           printf("The even elements are %d:\n", a[i]);
            // evensum += a[i];
            evencount++;
        }
        else
        {
           printf("The odd elements are %d:\n", a[i]);

            // oddsum += a[i];
            oddcount++;
        }
    }
     printf(" no of even elements is %d",  evencount);
     printf(" no of odd elements is %d",  oddcount);

    // printf("\nsum of odd elements is %d and no of odd elements is %d", oddsum, oddcount);

    return 0;
}