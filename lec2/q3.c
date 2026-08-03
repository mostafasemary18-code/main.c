#include <stdio.h>
int main()
{
int gr=0;
printf("plase entar your gr\n");
scanf("%d",&gr);
if (0<=gr&&gr<=50)
	{printf("failed\n");
}
else if(50<=gr&&gr<=65){
	printf("pass\n");
}
else if(65<=gr&&gr<=75){
printf("good\n");}
else if(75<=gr&&gr<=85){
printf("veary good\n");}
else{
	printf("exalient\n");
}
}