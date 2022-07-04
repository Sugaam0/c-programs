#include <stdio.h>
int main()
{
    int a[50];
    int i, size,check, count=0;
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
    printf("Enter the number to be checked:");
    scanf("%d", &check);
    for(i=0;i<=size-1;i++){
        if(a[i]==check)
        {
            count++;
         //printf("%d is present at %d position\n", check, i+1);            
        }    
    }
if(count>0){
         printf("%d is present at a[%d] position\n", check, i);            

}
         
    
    else {
      
            printf("%d is not present in a[%d]\n", check,i);
    }
    
    

    return 0;
}