#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,f;
printf("enter a,b and c");
scanf("%f%f%f",&a,&b,&c);
d=(-a)/2.0;
e=(-b)/2.0;
f=sqrt((d*d)+(e*e)-c);
printf("the center is (%f,%f) and radius is %f",d,e,f);

}
