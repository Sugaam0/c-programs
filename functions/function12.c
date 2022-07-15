//passing 2D array in function

#include<stdio.h>
void input(int [][30], int row, int col);
void display(int [][30], int row, int col);
int i,j;
int main(){
    int matrix[20][30], rowsize, colsize;
    printf("Enter the roeSize and ColSize:");
    scanf("%d%d", &rowsize, &colsize);
    input(matrix,rowsize,colsize);
    display(matrix,rowsize,colsize);
     return 0;
}
void input(int a[][30], int row, int col){
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++){
        printf("ENter value at a[%d]:", i);
        scanf("%d", &a[i][j]);
    }
}
}

void display(int a[][30], int row, int col){
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++){
        printf("%d\t",  a[i][j]);
    }
    printf("\n");

}
}

