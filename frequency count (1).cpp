//Count frequency of each element
#include<stdio.h>
int main()
{
    int a[10],n,i,j,count,visited[10] = {0};
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;
        count = 1;
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d %d\n", a[i], count);
    }
    return 0;
}

