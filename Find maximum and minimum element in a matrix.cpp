//Find maximum and minimum element in a matrix
#include <stdio.h>
int main() {
    int a[3][3], i, j, max, min;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
	}
    max = min = a[0][0];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j] > max)
            {
				max = a[i][j];
			}
            else if(a[i][j] < min) 
			{
				min = a[i][j];
			}
        }
	}
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}

