//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int no,sum=0,rem;
    printf("Enter a Number :");
    scanf("%d",&no);
    int copy=no;

    while(no!=0)
    {
    rem=no%10;
    sum=sum+rem;
    no=no/10;
    }
    printf("Sum of digit of %d is %d .",copy,sum);

    return 0;

}
