//8. Reverse an array
#include<stdio.h>
int main()
{
	int i,a[5];
	for(i=0;i<=4;i++)
	{
		printf("Enter the elements to store in array\n");
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("the arr[%d] = %d\n",i,a[i]);
	}
	return 0;
}
