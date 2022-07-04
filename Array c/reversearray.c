#include <stdio.h>
int main()
{
    int a[50];
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
    printf("The elements in reverse order are:\n");
    for(i=size-1;i>=0;i--){
        printf("a[%d]=%d\n", i,a[i]);

    }
    return 0;
}