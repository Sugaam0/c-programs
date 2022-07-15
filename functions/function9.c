//wap to input n elements in an array and display them using two different functions.

#include<stdio.h>
void inout(int[], int size);
void display(int[], int size);
int i;
int main(){
    int array[50], size;
    printf("ENter the size:");
    scanf("%d", &size);
    input(array,size);
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