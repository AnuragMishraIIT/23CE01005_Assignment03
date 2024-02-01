/*  
    LAB ASSIGNMENT: 03
    Question number: 05

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 26/1/2024
*/

#include <stdio.h>

int main()
{
    int n,fine;
    printf("Enter the number of days it is late:");
    scanf("%d",&n);

    if(n>30)
    {
        printf("Your membership has been cancelled!\n");
        return 0;
    }
    else if(n>10)
    {
        fine=(5*1)+(5*2)+(n-10)*5;
    }
    else if(n>5)
    {
        fine=5*1+(n-5)*2;
    }
    else
    {
        fine=(n*1);
    }
    printf("Your fine is %d\n",fine);
    
    return 0;
}