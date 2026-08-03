#include <stdio.h>
int main()
{
	int x,y,a;
	printf("please inter the number:");
    scanf("%d",&x);
	y=x;
	while(y<=x&&y>=1)
	{
		a=y*x;
		printf("%d",x);
		printf("*%d",y);
		printf("=%d\n",a);
		y=y-1;
	}
}