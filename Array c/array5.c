#include <stdio.h>
int main()
{
    int a[50];
    int i, size,largest,smallest;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    for (i = 0; i <= size - 1; i++)
    {
        printf("The elements at a[%d] are:\n", i);
        scanf("%d", &a[i]);
    }
    printf("the elements in  array are:\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf("a[%d]=%d\n",i, a[i]);
    }
    largest=a[0];
    smallest=a[0];
    for(i=0;i<=size-1;i++){
        if(a[i]>largest)
        {
            largest=a[i];
        }
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
        
    }
    printf("\n %d is the largest value", largest);
    printf("\n %d is the smallest value", smallest);

return 0;
}