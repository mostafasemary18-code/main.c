#include <stdio.h>
int main()
{
int num1=0,num2=0,num3=0;
printf("plase entar number1 \n");
scanf("%d",&num1);
printf("plase entar number2 \n");
scanf("%d",&num2);
printf("plase entar number3 \n");
scanf("%d",&num3);
if (num1>num2 && num2>num3){printf("%d",num1);}
else if (num3>num1){printf("%d",num3);}
else{printf("high number is %d",num2);}
}