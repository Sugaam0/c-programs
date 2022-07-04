#include <stdio.h>
int main()
{
    int a[50];
    int i, size, minimum, maximum;
    float average = 0, sum = 0;
    printf("Enter the number of persons:");
    scanf("%d", &size);
    for (i = 0; i <= size - 1; i++)
    {
        printf("The age of person at a[%d] is:\n", i);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("The number of person's ages in array are:");
    for (i = 0; i < size; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    maximum = a[0];
    minimum = a[0];
    for (i = 0; i < size; i++)
    {
        if (a[i] > maximum)
        {
            maximum = a[i];
        }
        if (a[i] < minimum)
        {
            minimum = a[i];
        }
    }
    printf("\n%d is the maximum age ", maximum);
    printf("\n%d is the minimum age ", minimum);
    average = sum / size;
    printf("\n%f is the average age ", average);
    return 0;
}