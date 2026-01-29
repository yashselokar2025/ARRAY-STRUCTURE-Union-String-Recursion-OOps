#include<stdio.h>
int main()
{
	int i,a[5],b;
	for(i=0;i<=4;i++)
	{
		printf("Enter the elements to store in array : \n");
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search in array");
	scanf("%d",&b);
	for(i=0;i<=4;i++)
	{
		if(a[i] == b)
		{
			printf("The Element is found at the position is/index number is %d",i);
		}
	}
	
	return 0;	
}

