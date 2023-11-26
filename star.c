#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,j;
	printf("enter value of n=");
	scanf("%d",&n);
	   while(i<=n)
	   {
	   	j=1;
	   	  while(j<=i)
	   	  {
	   	  	printf("*");
	   	  	j++;
			 }
		i++;
		printf("\n");	 
	   }
getch();	   
	
}