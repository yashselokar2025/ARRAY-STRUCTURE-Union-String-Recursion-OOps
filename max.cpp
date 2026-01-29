#include<stdio.h>
int main()
{
	int arr[5];
	int i,max ;
	for(i=0;i<=4;i++)
	{
		printf("Enter the 5 integers to store\n");
		scanf("%d",&arr[i]);
		
	}
	max = arr[0];
	for(i=0;i<=4;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	
	}
	printf("Maximum number : %d",max);
	return 0;
}
