#include<stdio.h>
#include<conio.h>
int main(){
   char choice;
   int num,rev=0, rem, A, B, C;
   int count=0; 
   
   printf("Enter any number");
   scanf("%d", &num);
   printf("Enter your choice ");
   scanf(" %c", &choice);
   
  if(choice=='A'){
     
      while(num!=0){
         rem=num%10;
         rev=rev*10+rem;
         num/=10;
         
               }
               printf("The reverse of number is %d", rev);
  }

   else if(choice=='B'){
      while(num!=0)  
   {  
       num=num/10;  
       count++;  
   }  
   printf("Number of digit is %d", count );
  }
  else if(choice=='C'){
      while (num != 0)
   {
      rem = num % 10;
      rev       = rev + rem;
      num        = num/ 10;
   }
   printf("Sum of digit in number is %d", rev);
  }
  getch();
   return 0;
}