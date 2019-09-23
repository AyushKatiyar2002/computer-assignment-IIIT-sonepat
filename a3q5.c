#include<stdio.h>
void main()
{
float a,b,c;
printf("enter a,b and c");
scanf("%f%f",&a,&b);
c=(-a)/b;

if(b==0)
{
    printf("slope is infinity,so line is vertical");
}
else
    printf("slope =%f",c);
}
