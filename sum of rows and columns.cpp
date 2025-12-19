#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum[3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
    	}
	}
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i] += a[i][j];
		}
    }
    printf("Sum of row :");
    for(i=0;i<3;i++)
    {
    	printf("%d\n",sum[i]);
	}
    return 0;
}
