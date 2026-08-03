#include <stdio.h>
int main () {
int x=10,y=20,z;
	z=x;
	x=y;
	y=z;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
}
