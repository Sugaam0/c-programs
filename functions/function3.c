//wap to calculate the sum of digits of number using function.

#include<stdio.h>
int sum(int);
int main(){
    int num,sum1;
    printf("Enter the number:");
    scanf("%d", &num);
    sum1=sum(num);
    printf("TYhe sum of digits of %d is  %d", num,sum1);
    return 0;
}
int sum(int a){
    int rem, sum=0;
    while(a!=0){
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    return sum;
}