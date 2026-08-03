#include <stdio.h>
int areaC (int r){
	int a;
     a=3.14*r*r;
	 printf("%d",a);
return 0;}
int areaCL	(int r ,int h) {
	int cl;
     cl=2*3.14*r*h;
	 printf("%d",cl);
return 0;}
int main()
{  
   int x,y;
   printf("redase c ");
   scanf("%d",&x);
   areaC(x);
   
 printf("redase cl ");
   scanf("%d",&x);
  printf("hight cl ");
   scanf("%d",&y);
  areaCL(x,y);
} 