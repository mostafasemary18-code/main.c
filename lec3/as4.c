#include <stdio.h>
int p (int x){
	int a=1;
	while(x>>0)
	{
		a=a*x;
		x=x-1;
	}
	return a;
	}
int l (int k){
	int a=1;
	while(k>>0)
	{
		a=a*k;
		k=k-1;
	}
	return a;
	}
	int q (int x , int y ){
	int z;
	int b=1;
	z=x-y;
	while(z>>0)
	{
		b=b*z;
		z=z-1;
	}
	return b;
	}
int main(){
	int x,y,e,r,v,b;
	printf("please inter the number1:");
    scanf("%d",&x);
	printf("please inter the number2:");
    scanf("%d",&y);
	e=p (x);
	r=q (x,y);
	b=l (y);
	v=e/(b*r);
	printf("%d",v);
}