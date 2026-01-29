#include <stdio.h>
int main()
{
    int a[3][4],i,j,count=0,counte=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d\n",&a[i][j]);
        }
	}
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)  
        {
            if(a[i][j] % 2 == 0)
            {
                count++;
            }
            else
            {
            	counte++;
			}
        }
    }
    printf("The number of even number is : %d\n",count);
    printf("The number of odd number is : %d\n",counte);
    return 0;
}
