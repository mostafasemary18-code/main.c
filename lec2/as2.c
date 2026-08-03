#include <stdio.h>
int main()
{
	int num1=0,num2=0,process=0,g=0;
	float a=0,s=0,d=0,f=0;
	printf("plase inter number1\n");
	scanf("%d",&num1);
	printf("plase inter number2\n");
	scanf("%d",&num2);
	printf("plase inter process \n 1=+\n 2=-\n 3=*\n 4=/\n 5=&\n");
	scanf("%d",&process);
	switch (process) {
		case 1 :a=num1+num2;printf("number1+number2=%f",a);break;
		case 2 :s=num1-num2;printf("number1-number2=%f",s);break;
		case 3 :d=num1*num2;printf("number1*number2=%f",d);break;
		case 4 :f=num1/num2;printf("number1/number2=%f",f);break;
		case 5 :g=num1&num2;printf("number1&number2=%d",g);break;
	    default : printf("WRONG number");break;
	}
}