#include<stdio.h>
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	getch();
}