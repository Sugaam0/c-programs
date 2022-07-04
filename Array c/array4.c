#include <stdio.h>
int main()
{
    int a[50];
    int i, size,num,count=0;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    for (i = 0; i <= size - 1; i++)
    {
        printf("The elements at a[%d] are:\n", i);
        scanf("%d", &a[i]);
    }
    printf("ENter any number:");
    scanf("%d", &num);
    for(i=0;i<=size-1;i++)
    {
    if(num==a[i]){
        count++;
    }
    }
    if(count>0){
        printf("The number is present in array");
        
    }
    else{
        printf("The number is not present in an array");
    }
    return 0;
}