/*Write a program using recursion to calculate nth element of Fibonacci series. */
#include <stdio.h>

int fibonacci(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int num;

    printf("Enter a number to see its fibonacci series: ");
    scanf("%d", &num);

    printf("The finonacci series of %d number is %d", num, fibonacci(num));

    return 0;
}