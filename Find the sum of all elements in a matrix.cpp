// Find sum of all elements in a matrix
#include<stdio.h>
int main()
{
	int i,j,a[3][3],sum = 0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("aEnter the number to store in a matrix: ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum = sum + a[i][j]; 
		}
		
	}
	printf("%d",sum);
	return 0;
}
