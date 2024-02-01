/*  
    LAB ASSIGNMENT: 03
    Question number: 03

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 26/1/2024
*/

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Input three positive numbers to determine if they are the sides of triangle or not:\n");
    scanf("%d %d %d",&a,&b,&c);
    
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        printf("%d, %d and %d are the three sides of a triangle.\n",a,b,c);
    }
    else
    {
        printf("%d, %d and %d are \"NOT\" the three sides of a triangle.\n",a,b,c);
    }

    return 0;
}