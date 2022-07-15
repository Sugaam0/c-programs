//wap to calculate the power of given number using function.

#include<stdio.h>
int power(int base,int exponant);
int main(){
    int num,power1,powee;
    printf("ENter the number:");
    scanf("%d", &num);
    printf("Enter the power:");
    scanf("%d", &powee);
    power1=power(num,powee);
    printf("\n %d^%d=%d\n",num,powee,power1);
    return 0;
}
int power(int a,int b){
    int power=1,i;
    for(i=1;i<=b;i++)
    {
        power=power*a;
    }
    return power;
}