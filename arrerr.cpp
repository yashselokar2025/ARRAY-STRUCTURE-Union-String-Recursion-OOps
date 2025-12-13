#include<stdio.h>
int main()
{
	int a[5],i,counte=0,countf=0;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter the 5 integers :\n");
		scanf("%d",&a[i]);
		
	}
		for(i=0;i<=4;i++)
	{
		if(a[i]%2 == 0)
		{
			counte = counte+1;
		}
		else
		{
			countf = countf+1;
		}
			
	}
	printf("The count of even number is : %d and of odd is : %d\n",counte,countf);
}
