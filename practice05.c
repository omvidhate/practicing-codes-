#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{

    int a = 10;
    int b = 20;

    printf("The value of a = %d & b = %d\n", a, b);

    swap(&a, &b);

    printf("After changing the value of a = %d & b = %d\n", a, b);

    return 0;
}