//wap to input a string and copy it to another string

#include<stdio.h>
int main()
    {
        char str[50],copy[50];
        int i,count=0;
        printf("Enter any string:");
        gets(str);
        for(i=0;str[i]!='\0';i++)
        {
            count++;
        }
        for(i=0;i<count;i++)
            {
                copy[i]=str[i];
            }
            str[i]='\0';
            printf("The copied string is %s", copy);
            return 0;
    }