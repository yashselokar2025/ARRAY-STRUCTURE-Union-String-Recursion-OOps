//Print unique elements in an array
#include<stdio.h>
int main()
{
	int i,a[5],j,k,n=5;
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
				//
                for(k = j; k <3; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;    
                j--;    
			}
		}
		
	}
	printf("The Final array is : \n\n");
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
