//Sort array in ascending order (Bubble Sort)
//If every element is unique
#include<stdio.h>
int main()
{
	int i,a[5],max,semax,thmax;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter the number to store in array : \n");
		scanf("%d",&a[i]);
	}
	max = a[0];
	semax = 0;
	thmax = 0;
	for(i=0;i<=4;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	for(i=0;i<=4;i++)
	{
		if(max>a[i])
		{
			if(a[i]>semax)
			{
				semax = a[i];
			}
			
		}
	}
	for(i=0;i<=4;i++)
	{
		if(semax>a[i])
		{
			if(a[i]>thmax)
			{
				thmax = a[i];
			}
			
		}
	}
	printf("The Largest number is %d ",max);
	printf("The Second Largest number is  %d",semax);
	printf("The third Largest number is %d",thmax);
	return 0;
}

