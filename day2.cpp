#include<stdio.h>
int main()
{
	int arr[5];
	int i,m,k;
	for(i=0;i<=4;i++)
	{
		printf("Enter the 5 integers to store\n");
		scanf("%d",&arr[i]);
		
	}
	for(k=0;k<=4;k++)
		{
			printf("arr[%d] = %d\n",k,arr[k]);
		}
	return 0;
}
