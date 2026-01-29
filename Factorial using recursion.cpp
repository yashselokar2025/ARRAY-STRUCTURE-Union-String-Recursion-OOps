//*Example 1: Factorial Using Recursion*
//Problem:
//Factorial of n
//n! = n × (n-1)!
//0! = 1

#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int num = 5;
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}
