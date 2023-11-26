#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float x,sinx,cosx;
	printf("enter the angle =");
	scanf("%f",&x);
	sinx=sin(x*(3.142/180.0));
	cosx=cos(x*(3.142/180.0));
	printf("sin=%f\n",sinx);
	printf("cos=%f",cosx);
	getch();
}