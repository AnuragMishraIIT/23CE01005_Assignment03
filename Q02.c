/*  
    LAB ASSIGNMENT: 03
    Question number: 02

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 26/01/2024
*/

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Input three integers to determine the largest integer:\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
            printf("The largest integer number is %d",a);
        else
            printf("The largest integer number is %d",c);
    }
    else
    {
        if(b>c)
            printf("The largest integer number is %d",b);
        else
            printf("The largest integer number is %d",c);
    }
    
    return 0;
}