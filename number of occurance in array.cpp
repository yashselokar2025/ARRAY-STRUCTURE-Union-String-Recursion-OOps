#include<stdio.h>
int main()
{
	int i,a[5],b,count=0;
	for(i=0;i<=4;i++)
	{
		printf("Enter the elements to store in array\n");
		scanf("%d",&a[i]);
		
	}
	printf("Enter the number to search of its occurence:\n");
	scanf("%d",&b);
	for(i=0;i<=4;i++)
	{
		if(a[i] == b)
		{
			count = count +1;	
		}
	}
	printf("The number to search of its occurancce is %d is %d times\n",b,count);
	return 0;
}
