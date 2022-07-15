//wap to sort an array using functions in ascending order.

#include<stdio.h>
void input(int[], int size);
void display(int[], int size);
void ascending(int[], int size);
int i;
int main(){
    int array[50], size;
    printf("ENter the size:");
    scanf("%d", &size);
    input(array,size);
    display(array,size);
    ascending(array,size);
    printf("The sorted array is:");
    display(array,size);


    return 0;
}

void input(int a[], int size){
    for(i=0;i<size;i++){
        printf("ENter value at a[%d]:", i);
        scanf("%d", &a[i]);
    }
}

void display(int b[], int size){
    for(i=0;i<size;i++){
        printf("a[%d]=%d\n", i, b[i]);
    }

   
}
void ascending(int c[], int size){
    int j,temp;
    for(i=0;i<=size-2;i++){
        for(j=0;j<=size-2-i;j++){
            if(c[j] > c[j+1]){
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }

    }
}