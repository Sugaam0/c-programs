//wap to compare 4 numbers and print the maximum number using function.


#include<stdio.h>
int compare(int,int,int,int);
int main(){
    int num1, num2, num3, num4;
    int max;
    printf("Enter the first number:");
    scanf("%d", &num1);
    
    printf("Enter the second number:");
    scanf("%d", &num2);
    printf("Enter the third number:");
    scanf("%d", &num3);
    printf("Enter the fourth number:");
    scanf("%d", &num4);
    max=compare(num1,num2,num3,num4);
    printf("The max number is %d", max);
    return 0;

}
 int compare(int a,int b,int c, int d){
    if(a>b && a>c && a>d){
        return a;
    }
    if(b>a && b>c && b>d){
        return b;
    }
    if(c>a && c>b && c>d){
        return c;
    }
    if(d>a && d>b && d>c){
        return d;
    }
 }