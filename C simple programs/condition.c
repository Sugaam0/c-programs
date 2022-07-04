#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
        char name[]="Nepal COllege Of Information Technology";
        while(i<strlen(name)){
        strlwr(name);
        printf("%c", name[i]);
        i++;
        }
        return 0;


}