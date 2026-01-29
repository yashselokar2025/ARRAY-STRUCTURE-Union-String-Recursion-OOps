#include<stdio.h>
union Data{
	int x;
	float y;
	char z;
};

int main() {
	union Data d;
	
	d.x = 10;
	printf("Value of x: %d\n",d.x);
	d.y = 5.5;
	printf("Value of y: %.1f\n",d.y);
	d.z ='A';
	
	printf("Value of z: %c\n",d.z);
}
