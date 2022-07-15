//wap to calculate the reverse of a number and check if it is palindrome or not using functions.

#include<stdio.h>
int reverse(int);
int palindrome(int);
int main(){
    int num,rev;
    printf("Enter any number:");
    scanf("%d", &num);
    rev=reverse(num);
    printf("The reverse of %d is %d\n", num,rev);
    if(palindrome(num)==0){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
    return 0;

}
int reverse(int a){
    int rem, sum=0;
    while(a!=0){
        rem=a%10;
        sum=sum*10+rem;
        a/=10;
    }
    return sum;
}
int palindrome(int a){
    int rem, sum=0,orig;
    orig=a;
    while(a!=0){
        rem=a%10;
        sum=sum*10+rem;
        a/=10;
    }
    if(orig==sum){
    return 0;
    }
    else{
        return 1;
    }
}