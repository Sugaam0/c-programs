#include<stdio.h>

int main(){
    int a=0, b=1,num, i;
    int c=a+b;
    printf("ENter upto ");
    scanf("%d", &num);
    printf("Fibonacci series is %d ,%d,", a, b);
    for(i=3;i<=num;i++){
          printf("%d,", c);
    a=b;
    b=c;
    c=a+b; 
    }
  
    
  
    return 0;
}