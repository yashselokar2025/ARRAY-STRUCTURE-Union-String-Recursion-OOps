#include<stdio.h>
int main()
{
	int arr[5];
	int i,k;
	for(i=0;i<=4;i++)
	{
		printf("Enter the 5 integers to store\n");
		scanf("%d",&arr[i]);
		
	}
	for(k=0;k<=4;k++)
	{
			printf("arr[%d] = %d\n",k,arr[k]);
			arr[2] = 9;
	}
	
	
	return 0;
}
