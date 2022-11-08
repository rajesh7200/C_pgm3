//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int no,q;
    printf("Enter a number :");
    scanf("%d",&no);
    q=no/10;
    printf("Given number is %d and with out its last digit is %d .",no,q);

    return 0;
}
