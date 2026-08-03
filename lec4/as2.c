#include <stdio.h>
int main()
{ int arr[10];
int a,i,b;
int p=0;
int u=0;
for (i=0;i<10;i++){
	printf("num:");
	scanf("%d",&arr[i]);
}
a=arr[0];
for (i=0;i<10;i++){
	if (arr[i]%2 == 0){
	    a=arr[i];
		p=a+p;
	}
    else{
		b=arr[i];
		u=u+b;
		
	}
}
printf("sum even num %d\n",p);
printf("sum odd num %d\n",u);
}
