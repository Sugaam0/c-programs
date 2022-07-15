//wap to add matrix using functions.
#include<stdio.h>
void input(int [][30], int row, int col);
void display(int [][30], int row, int col);
void sum(int [][30],int [][30], int row, int col);
int i,j;
int main(){
    int matrix1[20][30],matrix2[20][30], row1, col1, row2,col2;
    top:
    printf("Enter the roeSize and ColSize of first matrix:");
    scanf("%d%d", &row1, &col1);
    printf("Enter the rowSize and ColSize of second matrix:");
    scanf("%d%d", &row2, &col2);
    if(row1==row2 && col1==col2){
        goto next;
    }
    else{
        goto top;
    }
    next:
    printf("For first matrix:\n");
    input(matrix1,row1,col1);
    printf("The first matrix is:\n");
    display(matrix1,row1,col1);
    printf("For second matrix:\n");
    input(matrix2, row2,col2);
    printf("The second matrix is:\n");
    display(matrix2,row2,col2);
    sum(matrix1,matrix2,row1,col1);
    return 0;
}
void input(int a[][30], int row, int col){
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++){
        printf("ENter value at [%d][%d]:", i,j);
        scanf("%d", &a[i][j]);
    }
}
}
void sum(int a[][30], int b[][30] ,int row, int col){
    int c[20][30];
 for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The added matrix is:\n");
    for(i=0;i<row;i++)
{
    for(j=0;j<col;j++){
        printf("%d\t",  c[i][j]);
    }
    printf("\n");
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

