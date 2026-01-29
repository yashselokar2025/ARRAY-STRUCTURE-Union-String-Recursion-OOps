#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    int rowsum[3]={0,0,0}, columnsum[3]={0,0,0};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
    	}
    	printf(" \n");
	}
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            rowsum[i] += a[i][j];
            columnsum[j] += a[i][j];
		}
    }
    printf("Sum of row :");
    for(i=0;i<3;i++)
    {
    	printf("%d\n",rowsum[i]);
	}
	printf("Sum of columns : ");
	for(j=0;j<3;j++)
	{
		printf("%d\n",columnsum[j]);
	}
    return 0;
}
