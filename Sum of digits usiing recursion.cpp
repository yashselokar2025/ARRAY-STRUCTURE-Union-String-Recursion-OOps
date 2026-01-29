//*Example 3: Sum of Digits Using Recursion*
#include <stdio.h>
int sumDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}
int main()
{
    int num = 1234;
    printf("Sum of digits = %d", sumDigits(num));
    return 0;
}

