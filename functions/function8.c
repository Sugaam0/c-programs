// wap to add two numbers, function input must read two numbers, function add must add the numbers and function
//  display must display the result.

#include <stdio.h>
void input(int,int);
int add(int, int);
void display(int, int);
int main()
{
    int num1, num2;
    input(num1,num2);
    display(num1, num2);
    return 0;
}
void input(int num1,int num2)
{
    printf("Enter the number:");
    scanf("%d%d", &num1, &num2);
}

int add(int c, int d)
{
    int sum = c + d;
    return sum;
}
void display(int a, int b)
{

    printf("The sum of %d and %d is %d", a, b, add(a, b));
}
