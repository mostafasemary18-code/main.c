#include <stdio.h>
int main()
{ int arr[10];
int a,i,b;

for (i=0;i<10;i++){
	printf("num:");
	scanf("%d",&arr[i]);
}
a=arr[0];
for (i=0;i<10;i++){
	if (a < arr[i])
	a=arr[i];
    else{
		b=arr[i];
	}
}
printf("the bagest num %d\n",a);
printf("the lower num %d\n",b);
}
