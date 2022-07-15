//wap to check armstrong number.

#include <stdio.h>
#include <math.h>
int armstrong(int);
int main(){
    int num,armstr;
    printf("Enter the number:");
    scanf("%d",&num);
    armstr=armstrong(num);
    if(armstr==0){
        printf("%d is an armstrong number",num);
    }
    else{
        printf("%d is not an armstrong number",num);
    }
    return 0;
}
int armstrong(int n){
    int sum=0,rem=0,i,orig;
    orig=n;
    while(n!=0){
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;
    }
    if(sum==orig){
        return 0;
    }
    else{
        return 1;
    }
}