//Write a program to swap values of two int variables without using a third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d and b=%d .\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap a=%d and b=%d .",a,b);
    return 0;
}
