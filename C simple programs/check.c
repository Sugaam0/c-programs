#include<stdio.h>
#include<math.h>
int main(){
    float i,n,sum1=0,a,x,first_term;

    printf("Enter no of term ");
    scanf("%f", &n);
    printf("Enter value of x ");
    scanf("%f", &x);
    a=((x-1)/x);
    for(i=1;i<=n;i++){
        sum1=a+0.5*(pow(a,i));
    }
    printf("%f", sum1);
    return 0;

}