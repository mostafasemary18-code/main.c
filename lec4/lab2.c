#include <stdio.h>
int main()
{ int arr[10];
int i=0,a=0,b=1;
for (i=0;i<10;i++){
	printf("num:");
	scanf("%d",&i);
	a=a+i;
	b=b*i;
}
printf("%d",a);
printf("%d",b);
}
