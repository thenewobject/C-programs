#include <stdio.h>
float factorial(int num);
int main()

/* C program to find the sum of Natural Number/Factorial of Number of all natural numbers from 1 to N.
Series: 1/1! + 2/2! + 3/3! + 4/4! + ... N/N!  */
{
    int i,N;
    float sum;

    printf("Enter the value of N: ");
    scanf("%d",&N);

    sum=0.0f;

    for(i=1;i<=N;i++)
        sum = sum + ( (float)(i) / (float)(factorial(i)) );

    printf("Sum of the series is: %f\n",sum);
    return 0;
}


/*function to find factorial of the number*/
float factorial(int num)
{
    int i;
    /*always assign 1, if variable multiplies with values*/
    float fact=1;

    /*multiply num*num-1*num-2*..1*/
    for(i=num; i>=1; i--)
        fact= fact*i;

    /*return factorial*/
    return fact;
}


