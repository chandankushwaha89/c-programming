#include<stdio.h>
int main()
{
    int a=-5,b=-9,c=-10;int p,q,r;
     p=a++ + ++b - --c;
     q=a-- + --b + c--;
     r=++a - b++ - c++;
    printf("p=%d\nq=%d\nr=%d",p,q,r);
    return 0;
}