/*  
    LAB ASSIGNMENT: 03
    Question number: 01

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 26/01/2024
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Input the integer to determine if it is positive, negative or zero:\n");
    scanf("%d",&n);
    (n>0)
        ?printf("%d is a positive number.\n",n)
        :(n<0)
            ?printf("%d is a negative number.\n",n)
            :printf("%d is zero",n);

    return 0;
}