#include <stdio.h>

int set_Bit (int Num,int Bit)
{
	return Num | (Num<<Bit);
}
int clr_Bit (int Num,int Bit)
{
	return Num &(~(Num<<Bit));
}
int toggal_Bit (int Num,int Bit)
{
	return Num ^ (Num<<Bit);
}
int Get_Bit (int Num,int Bit)
{
	return (Num>>Bit) & 1;
}
void swap (int x , int y,int z){
	z=x;
	x=y;
	y=z;
}
int main () {
int Num,Bit;
printf("Num :\n ");
scanf("%d",&Num);
printf("Bit :\n");
scanf("%d",&Bit);
printf("set : %d\n",set_Bit(Num,Bit));
printf("clr : %d\n",clr_Bit(Num,Bit));
printf("togal : %d\n",toggal_Bit(Num,Bit));
printf("get : %d\n",Get_Bit(Num,Bit));
}