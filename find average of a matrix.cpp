//Find average of elements in a matrix.
#include<stdio.h>
int main()
{
	int i,j,a[3][3],sum;
	float average;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the number to store in a matrix : ");
			scanf("%d",&a[i][j]);
		}
		printf(" \n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum = sum + a[i][j];
		}
	}
	average = sum / 9 ;
	printf("%d\n",sum);
	printf("%2f\n",average);
	return 0;
}
