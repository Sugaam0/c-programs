//wap to add two numbers using functions.

#include<stdio.h>
void read (int a[]);
void display(int a[]);
void sum(int a[]);
int i;
int main()
{
    int  a[50];
    read(a);
    display(a);
    sum(a);
    return 0;
}
 void read(int a[]){
    for(i=0;i<=1;i++){
        printf("\nENter the value for a[%d] is:",i );
        scanf("%d", &a[i]);
    }
 }
 void display(int a[]){
    for(i=0;i<=1;i++){
        printf("\n The value of a[%d] is %d", i, a[i]);
    }
 }

 void sum(int a[]){
    int sum=0;
    for(i=0;i<=1;i++){
        sum=sum +a[i];
    }
    printf("\n The sum is %d", sum);
 }