//Find pair of elements whose sum is equal to a given number
#include<stdio.h>
int main()
{
    int a[10], n, i, j, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
                printf("%d %d\n", a[i], a[j]);
        }
    }

    return 0;
}

