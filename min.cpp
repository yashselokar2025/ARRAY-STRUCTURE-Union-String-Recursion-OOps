#include<stdio.h>
int main()
{
	int arr[5];
	int i,min ;
	for(i=0;i<=4;i++)
	{
		printf("Enter the 5 integers to store\n");
		scanf("%d",&arr[i]);
		
	}
	min = arr[0];
	for(i=0;i<=4;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	
	}
	printf("Maximum number : %d",min);
	return 0;
}
