/*  
    LAB ASSIGNMENT: 03
    Question number: 06

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 26/1/2024
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n,a,b,sum=0,num;
    /* n takes the number as user input,
    a and b store the two arbitrary parts of n^2,
    sum is used as counter to count the number of digits in n^2 to set limit to the subsequent "for" loop,
    num is initially initialized to n*n, but its value changes with each iteration of the while loop. */ 
    printf("Enter the number to check if it is Kaprekar number or not\n");
    scanf("%d",&n);

    num=n*n; //Initialization to n^2

    while(num>0) //Used for counting the number of digits in n^2 to use in deciding the limit of the subsequent "for" loop
    {
        sum=sum+1;
        num=num/10;
    }

    for(int i=10;i<pow(10,sum);i*=10) //Heart of the program that breaks the square of the number into two pieces
    {   
        b=(n*n)/i; //One part of n^2
        a=(n*n)%i; //Another part of n^2

        if((a+b)==n) //If a particular pair of "a" and "b" work out
        {
            printf("Yes, %d is Kaprekar number.\nReason: %d^2=%d=%d+%d=%d\n",n,n,n*n,b,a,n);
            return 0; //To end the program to save computing power from being used without any reason
        }
    }
    printf("This is NOT a Kaprekar number.");
    return 0;
}