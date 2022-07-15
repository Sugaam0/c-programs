//wap to add two numbers using functions.

#include<stdio.h>
void read (int a[], int size);
void display(int a[], int size);
void sum(int a[], int size);
int i;
int main()
{
    int size, a[50];
    printf("Enter the size:");
    scanf("%d", &size);
    read(a,size);
    display(a,size);
    sum(a,size);
    return 0;
}
 void read(int a[], int size){
    for(i=0;i<=size-1;i++){
        printf("\nENter the value for a[%d] is:",i );
        scanf("%d", &a[i]);
    }
 }
 void display(int a[], int size){
    for(i=0;i<=size-1;i++){
        printf("\n The value of a[%d] is %d", i, a[i]);
    }
 }

 void sum(int a[], int size){
    int sum=0;
    for(i=0;i<=size-1;i++){
        sum=sum +a[i];
    }
    printf("\n The sum is %d", sum);
 }