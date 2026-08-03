#include <stdio.h>
int main()
{
int num1,num2,q,w,e,r,t;
printf("please inter number1:");
scanf("%d",&num1);
printf("please inter number2:");
scanf("%d",&num2);
q=num1+num2;
w=num1-num2;
e=num1&num2;
r=num1|num2;
t=num1^num2;
printf("a+b=%d\n",q);
printf("a-b=%d\n",w);
printf("a&b=%d\n",e);
printf("a|b=%d\n",r);
printf("a^b=%d\n",t);
}