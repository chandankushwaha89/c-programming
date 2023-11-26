#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("Enter three value");
    scanf("%d%d%d",&a,&b,&c);
    big=a>b?(a>c?a:c):(b>c?b:c);
    printf("\n The biggest number is :%d",big);
    return 0;
}