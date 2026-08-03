#include <stdio.h>
int op (int x,int a,char q){
	int b;
	switch (q){
	case '+' : b=x+a ;break;
	case '-' : b=x-a ;break;
	case '*': b=x*a ;break;
	case '/' : b=x/a ;break;
	default: printf("eror");break;
}return b;}
int main()

{ int x,a,b;
char q;
 printf("num  1 =");
 scanf("%d",&x);
 printf("num  2 =");
 scanf("%d",&a);
printf("opr +,-,*,/");
 scanf(" %c",&q);
 b = op (x,a,q);
 printf("%d",b);


}

