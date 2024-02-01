/*  
    LAB ASSIGNMENT: 03
    Question number: 07

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 26/1/2024
*/

#include <stdio.h>

int main()
{
    int N, K;
    float T, M, W;

    printf("Enter the marks obtained, the number of classes attended, the total number of classes conducted:\n");
    scanf("%f %d %d",&M,&N,&K);

    if(M<0||M>100||N>K||N<0||K<0)
    {
        printf("Wrong input(s). Program terminating.\n");
        return 1;
    }

    W=(float)N/(float)K; //Typecasting and assignment
    T=M*W;
    
    printf("Final score=%f\n",T);
    printf("Grade=");

    (T>=90) //Nested ternary operators.
        ?printf("Ex\n")
        :(T>=80)
            ?printf("A\n")
            :(T>=70)
                ?printf("B\n")
                :(T>=60)
                    ?printf("C\n")
                    :(T>=50)
                        ?printf("D\n")
                        :(T>=40)
                            ?printf("P\n")
                            :printf("F\n");

    return 0;
}