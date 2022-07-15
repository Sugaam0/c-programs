//wap to enter the raduius of 4 circles and display their areas using functions.

#include<stdio.h>
#define pie 3.14
void display(float);
float area(float);
int main(){
    int r1,r2,r3,r4;
    printf("Enter the radius of 4 circles:");
    scanf("%d%d%d%d", &r1, &r2, &r3, &r4);
    display(r1);
    display(r2);
    display(r3);
    display(r4);



}
void display(float a){
    printf("The area of circle with radius %f is %f\n  ", a, area(a));
}

float area(float a){
    return pie*a*a;
}