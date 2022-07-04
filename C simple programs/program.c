#include <stdio.h>
#include <conio.h>
#include<math.h>
void main()
{
     float i,num,fact=1, sum=0, term,j;
     printf("enter the number");
     scanf("%f", &num);
   for(i=1; i<=2*num-1; i+=2)
   {
     fact=1;
     for(j=1;j<=i;j++){

     fact=fact*j;
     }
     
     term=(pow(i,i)/fact);
     sum=sum+term;
     printf("the sum of term is %f\n", term);
   }
        printf("the sum of series is %f\n", sum);

   getch();
}