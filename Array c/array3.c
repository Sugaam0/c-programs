#include <stdio.h>
int main()
{
    int a[50], b[50];
    int i, size;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    for (i = 0; i <= size - 1; i++)
    {
        printf("The elements at a[%d] are:\n", i);
        scanf("%d", &a[i]);
    }
    printf("the elements in first array are:\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf("a[%d]=%d\n",i, a[i]);
    }
    for(i=0;i<=size-1;i++)
    {
        b[i]=a[i];
    }
    printf("\nThe elements copied in second array are:\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf("\nb[%d]=%d",i, b[i]);
    }
    return 0;

}