#include<stdio.h>
int main()
{
	int a[5],b[5],c[5];
	int i,j,k;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter the 5 integers to store\n");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<=4;i++)
	{
		printf("arr[%d] = %d\n",i,a[i]);
			
	}
	
	for(j=0;j<=4;j++)
	{
		printf("Enter the 5 integers to store\n");
		scanf("%d",&b[j]);
		
	}
	for(j=0;j<=4;j++)
	{
		printf("arr[%d] = %d\n\n\n\n",j,b[j]);	
	}
	
	for(k=0;k<=4;k++)
	{
		c[k] = a[k] + b[k];
		printf(" arr[%d] = %d\n",k,c[k]);

	}
	return 0;
}
