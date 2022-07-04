#include <stdio.h>
int main()
{
    int a[50], b[50];
    int i;
    printf("Enter ten numbers:\n");
    
    for (i = 0; i <10; i++)
    {
        printf("The element at a[%d] is:\n", i);
        scanf("%d", &a[i]);
    }
    printf("The emements in array are:\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    printf("The elements in reverse are:\n");
    for(i=10-1;i>=0;i--){
            b[i]=a[i];
            printf("b[%d]=%d\n", i, b[i]);
    }
    return 0;
}