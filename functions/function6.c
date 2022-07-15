//wap to display fibonaciii series upto user given range using functions.

#include <stdio.h>
void fibonacci(int);
int main()
{
    int range;

    printf("Enter the range: ");
    scanf("%d", &range);
    printf("The fibonacci series is: \n");
    fibonacci(range);

    return 0;
}

void fibonacci(int range)
{

    int a = 0, b = 1, c;
    while (a <= range)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }
}