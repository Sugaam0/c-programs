//wap to input a string and convert each lowercase to uppercase and vice versa

#include<stdio.h>
int main()
    {
        char str[50];
        int i;
        printf("Enter any string:");
        gets(str);
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='a' && str[i]<='z'){
                str[i]-=32;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                str[i]+=32;
            }

        }
        printf("\n The result is: %s", str);
        return 0;
    }