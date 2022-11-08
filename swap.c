//Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d , b=%d .",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swap a=%d , b=%d .",a,b);
    return 0;
}
