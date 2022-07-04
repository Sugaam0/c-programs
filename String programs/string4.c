// wap to input a string and copy it to another string

#include<stdio.h>
int main()
    {
        char str[50], copy[50];
        int i, count=0, r;
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
            printf("The string in reverse order of %s is %s",str, copy);
            return 0;
    }