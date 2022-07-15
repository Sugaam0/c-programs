// wap to input n elements in an array and find the max and min element.(4 functions)

#include <stdio.h>
int max(int[], int size);
int min(int[], int size);
void input(int[], int size);
void display(int[], int size);
int i;
int main()
{
    int array[50], size;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    input(array, size);
    display(array, size);
    max(array, size);
    min(array, size);
    printf("The maximum number is: %d\n", max(array, size));
    printf("The minimum number is: %d\n", min(array, size));

    return 0;
}

void input(int a[], int size)
{
    for (i = 0; i < size; i++)
    {
        printf("ENter the value at a[%d]:", i);
        scanf("%d", &a[i]);
    }
}

int max(int a[], int size)
{
    int maximum;
    maximum = a[0];
    for (i = 0; i < size; i++)
    {
        if (a[i] > maximum)
        {
            maximum = a[i];
        }
    }
    return maximum;
}
int min(int a[], int size)
{
    int minimum;
    minimum = a[0];
    for (i = 0; i < size; i++)
    {
        if (a[i] < minimum)
        {
            minimum = a[i];
        }
    }
    return minimum;
}

void display(int a[], int size)
{

    for (i = 0; i < size; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}
