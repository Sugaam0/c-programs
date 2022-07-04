//wap to check if input string is palindrome or not

#include<stdio.h>
int main()
    {
        char str[50], copy[50];
        int i, count=0, r, flag=0;
        printf("Enter any string:");
        gets(str);
        for(i=0;str[i]!='\0';i++)
        {
            count++;
        }
        for(i=0,r=count-1;i<=count-1;i++,r--){
            copy[i]=str[r];
        }
            copy[i]='\0';
            for(i=0;i<count;i++){
                if(copy[i]!=str[i]){
            flag=1;
            break;
           }
            }
           if(flag==0){

            printf("The string is palindrome");
           }
           else{
            printf("The string is not palindrome");
           }
           return 0;
    }