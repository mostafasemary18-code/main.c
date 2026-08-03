#include <stdio.h>

int main ()
{
	int x,y,z,*temp;
	int *p,*q,*r;
	x=10;
	y=20;
	z=30;
	p=&x;
	q=&y;
	r=&z;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	printf("p=%d\n",p);
	printf("q=%d\n",q);
	printf("r=%d\n",r);
	printf("*p=%d\n",*p);
	printf("*q=%d\n",*q);
	printf("*r=%d\n",*r);
	printf("\nSwapping pointers.\n\n");
	temp=p;
	p=r;
	r=q;
	q=temp;
printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	printf("p=%d\n",p);
	printf("q=%d\n",q);
	printf("r=%d\n",r);
	printf("*p=%d\n",*p);
	printf("*q=%d\n",*q);
	printf("*r=%d\n",*r);
}