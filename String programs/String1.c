//wap to enter a string and count the length of string
#include<stdio.h>
int main()
    {
        int count=0,i;
        char str[30];
        printf("Enter any string:");
        gets(str);
        for(i=0;str[i]!='\0';i++)
            {
                count++;
            }
            printf("The length of %s is %d", str, count);
            return 0;
    }