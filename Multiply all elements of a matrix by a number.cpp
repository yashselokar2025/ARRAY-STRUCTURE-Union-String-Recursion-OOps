//Multiply all elements of a matrix by a number
#include <stdio.h>
int main() {
    int a[3][3], i, j, num;

    printf("Enter matrix elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
	}
    printf("Enter number to multiply: ");
    scanf("%d",&num);

    printf("Resultant matrix:\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
        {5
            printf("%d ", a[i][j] * num);
        }
        printf("\n");
    }
    return 0;
}

