//Wap to calculate simple interest using functions.

#include<stdio.h>
float calculate(float,float,float);
int main()
{
    float si,principle,time,rate;
    printf("Enter the principle:");
    scanf("%f", &principle);
        printf("Enter the rate:");
    scanf("%f", &rate);
        printf("Enter the time:");
    scanf("%f", &time);
    si=calculate(principle,rate,time);
    printf("The simple interest is : %f", si);
    return 0;
}
float calculate(float p, float t, float r)
    {
        return (p*t*r)/100;
    }

