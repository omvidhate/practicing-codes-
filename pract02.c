/*Write a function to convert Celsius temperature into Fahrenheit. */
// formula = f = (c * (9/5)) + 32;
#include <Stdio.h>

void fahrenheit(float n)
{
    int formula;

    formula = (n * (9.0 / 5.0)) + 32.0;

    printf("The %d int faharenheit temperture is %d", n, formula);
}

int main()
{
    int num;

    printf("Enter a number to convert celsius temperture into fahrenheit: ");
    scanf("%d", &num);

    fahrenheit(num);

    return 0;
}