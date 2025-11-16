/*Write a program to print the address of a variable. Use this address to get the 
value of the variable.*/
#include<stdio.h> 
int main()
{
    int num = 34;
    int *ptr;

    ptr = &num;

    printf("The value of num: %d\n",num);
    printf("The address of num: %p\n",&num);
    printf("The value store in ptr: %p\n",ptr);
    printf("Value using pointer is: %d\n",*ptr);

    return 0;
}