//Search an element in a matrix
#include <stdio.h>
int main() {
    int a[3][3], i, j, key, found = 0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
	}
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j] == key)
			{
                printf("Element found at position [%d][%d]\n", i, j);
                found = 1;
            }
        }
    }
    
    if(!found)
    {
        printf("Element not found\n");
	}
    return 0;
}

