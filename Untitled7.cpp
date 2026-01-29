#include<stdio.h>
int main()
{
	int arr[5];
	int i,k,sum = 0;
	float average;
	for(i=0;i<=4;i++)
	{
		printf("Enter the 5 integers to store\n");
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<=4;i++)
	{
			printf("arr[%d] = %d\n",i,arr[i]);
			sum = sum + arr[i];
		
	}
	printf("sum  :%d \n",sum);
	average = sum /5;
	printf("Average : %2f \n",average);
}
