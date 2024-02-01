/*  
    LAB ASSIGNMENT: 03
    Question number: 04

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 26/01/2024
*/

#include <stdio.h>

int main()
{
    float x1,x2,x3,y1,y2,y3;
    float area;
    printf("This program checks if three given coordinates (x1,y1), (x2,y2) and (x3,y3) fall on a straight line.\n");

    printf("Enter the first pair of coordinates- x1 and y1:\n");
    scanf("%f %f",&x1,&y1);
    printf("Enter the second pair of coordinates- x2 and y2:\n");
    scanf("%f %f",&x2,&y2);
    printf("Enter the third pair of coordinates- x3 and y3:\n");
    scanf("%f %f",&x3,&y3);

    area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;

    if(area==0)
    {
        printf("(%.3f,%.3f), (%.3f,%.3f) and (%.3f,%.3f) lie on a straight line.\n",x1,y1,x2,y2,x3,y3);
    }
    else
    {
        printf("(%.3f,%.3f), (%.3f,%.3f) and (%.3f,%.3f) do \"NOT\" on a straight line.\n",x1,y1,x2,y2,x3,y3);
    }
    return 0;
}