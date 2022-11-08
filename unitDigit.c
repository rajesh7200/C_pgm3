//Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int x,u;
    printf("Enter a Number :");
    scanf("%d",&x);
    u=x%10;
    printf("%d is unit digit of given number %d",u,x);
    return 0;
}
