//Subtract two matrices (3×2)
#include <stdio.h>
int main() {
    int a[3][2], b[3][2], diff[3][2], i, j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
	}
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
	}
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of matrices:\n");
    for(i=0;i<3;i++) 
	{
        for(j=0;j<2;j++)
		{
            printf("%d ",diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}

