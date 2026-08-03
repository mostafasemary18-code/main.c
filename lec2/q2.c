#include <stdio.h>
#include <conio.h>
int main()
{
int age=0;
printf("welcome to\n");
printf("plase entar your age\n");
scanf("%d",&age);
if (age>=16)
	{printf("yes you can drive\n");
}
else{
	printf("no,you can't drive\n");
}
printf("hit any key to continue...");

getch();
}