//Wap to calculate factorial of given numbers using functions.

#include<stdio.h>
int factorial(int);
int main()
{
    int num,fact;
    printf("Enter thenumber:");
    scanf("%d", &num);
    fact=factorial(num);
    printf("The factorial of %d is %d", num,fact);
    return 0;
}
int factorial(int num){
    int i,fact=1;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}