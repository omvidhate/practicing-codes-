/*1. Write a program using function to find average of three numbers.*/
#include <stdio.h>

int function(int a, int b, int c)
{
    int avag;

    avag = (a + b + c) / 3;

    return avag;
}
int main()
{

    int num1, num2, num3, result;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);

    result = function(num1, num2, num3);

    printf("The avag pf three number is = %d", result);

    return 0;
}