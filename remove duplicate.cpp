#include<stdio.h>
int main()
{
	int i,a[5],j;
	for(i=0;i<=4;i++)
	{
		printf("Enter the elements to store in array : \n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i] == a[j])
			{
				a[j] = 0;
			}
		}
		
	}
	printf("The Final array is : \n\n");
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}5
