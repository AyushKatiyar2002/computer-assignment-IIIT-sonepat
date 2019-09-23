#include<stdio.h>
#include<math.h>
void main()
{
float h,k,s,p,r,cr;
printf("enter h,q,r and s");
scanf("%f%f%f%f",&h,&k,&r,&s);

p=h-s;
cr=2*sqrt((r*r)-(p*p));

printf("the  length of chord  is %f",cr);

}
