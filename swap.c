#include<stdio.h>
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	getch();
}