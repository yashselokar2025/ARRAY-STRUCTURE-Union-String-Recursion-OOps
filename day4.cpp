#include<stdio.h>
int main()
{
	int a[3],b[3],c[3];
	int i;
	
	for(i=0;i<=2;i++)
	{
		printf("::\n");
		scanf("%d",a[i]);
		
	}
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
		
	}

	for(i=0;i<=2;i++)
	{
		printf("Enter the 3 for 2nd array digit number\n");
		
		printf("::\n");
		scanf("%d",b[i]);
		
	}
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=%d\n",i,b[i]);
		
	}
	
	for(i=0;i<=2;i++)
	{
		c[i] = a[i] + b[i];
		printf("The sum of two array in third array \n");
		printf("arr[%d] = %d\n",i,c[i]);
		
	}
	return 0;
		
}
